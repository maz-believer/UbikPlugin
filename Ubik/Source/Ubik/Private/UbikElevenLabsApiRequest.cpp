// Copyright Believer Research and Development Team . All Rights Reserved.


#include "UbikElevenLabsApiRequest.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Serialization/JsonSerializer.h"
#include "Sound/SoundWave.h"
#define MINIMP3_IMPLEMENTATION
#pragma warning(push)
#pragma warning(disable: 4456)
#pragma warning(disable: 4706)
#include "minimp3.h"
#include "minimp3_ex.h"
#pragma warning(pop)
#include "Interfaces/IAudioFormat.h"
#include "UbikTypes.h"
#include "Misc/FileHelper.h"



FString UElevenLabsRequest::FilePath;

UElevenLabsRequest* UElevenLabsRequest::TextToSpeechInit(UObject* WorldContextObject, EUbikElevenLabsVoice VoiceElevenlabsID, const FString& Text, float Stability, float SimilarityBoost, const FString& API_Key)
{
 
    const UEnum* EnumVoice = FindFirstObjectSafe<UEnum>(TEXT("EUbikElevenLabsVoice"));
    const FString VoiceId =  StaticEnum<EUbikElevenLabsVoice>()->GetValueAsString(VoiceElevenlabsID);  //EnumVoice->GetValueAsString(VoiceElevenlabsID);
    TArray<FString> Parsed;
    VoiceId.ParseIntoArray(Parsed, TEXT("::"), false);
    UElevenLabsRequest* Request = NewObject<UElevenLabsRequest>();
    Request->WorldContextObject = WorldContextObject;
    Request->RequestTextToSpeech(*Parsed[1], Text, Stability, SimilarityBoost, API_Key);
    return Request;
}

void UElevenLabsRequest::RequestTextToSpeech(const FString VoiceId, const FString& Text, float Stability, float SimilarityBoost, const FString& API_Key)
{
  // API Call
    FString Url = FString::Printf(TEXT("https://api.elevenlabs.io/v1/text-to-speech/%s/stream"), *VoiceId);
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetURL(Url);
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader("Content-Type", "application/json");
    HttpRequest->SetHeader("xi-api-key", API_Key);

    TSharedPtr<FJsonObject> RequestJson = MakeShareable(new FJsonObject());
    RequestJson->SetStringField("text", Text);

    TSharedPtr<FJsonObject> VoiceSettingsJson = MakeShareable(new FJsonObject());
    VoiceSettingsJson->SetNumberField("stability", Stability);
    VoiceSettingsJson->SetNumberField("similarity_boost", SimilarityBoost);

    RequestJson->SetObjectField("voice_settings", VoiceSettingsJson);

    FString RequestBody;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
    FJsonSerializer::Serialize(RequestJson.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(RequestBody);
    HttpRequest->OnProcessRequestComplete().BindUObject(this, &UElevenLabsRequest::OnRequestCompleted);
    HttpRequest->ProcessRequest();
}

void UElevenLabsRequest::OnRequestCompleted(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (bWasSuccessful && Response->GetResponseCode() == 200)
    {
      const TArray<uint8>& AudioData = Response->GetContent();
      USoundWave* SoundWave = CreateSoundWaveFromResponse(AudioData);
      OnCompleted.Broadcast(SoundWave);
      
    }
    else
    {
        FString ErrorMessage = FString::Printf(TEXT("Request failed. Response code: %d"), Response->GetResponseCode());
        OnFailed.Broadcast(ErrorMessage);
    }
}

USoundWave* UElevenLabsRequest::CreateSoundWaveFromResponse(const TArray<uint8>& AudioData)
{
    mp3dec_t MP3Decoder;
    mp3dec_init(&MP3Decoder);

    mp3dec_file_info_t MP3FileInfo;
    int LoadResult = mp3dec_load_buf(&MP3Decoder, AudioData.GetData(), AudioData.Num(), &MP3FileInfo, nullptr, nullptr);
	  
    if (LoadResult != 0) {
      return nullptr;
    }

    USoundWave* SoundWave = NewObject<USoundWave>(USoundWave::StaticClass());
    if (SoundWave) {
      SoundWave->RawPCMDataSize = MP3FileInfo.samples * sizeof(int16_t);
      SoundWave->RawPCMData = static_cast<uint8*>(FMemory::Malloc(SoundWave->RawPCMDataSize));
      FMemory::Memcpy(SoundWave->RawPCMData, MP3FileInfo.buffer, SoundWave->RawPCMDataSize);

      // Set the necessary SoundWave properties
      SoundWave->NumChannels = MP3FileInfo.channels;
      SoundWave->Duration = static_cast<float>(MP3FileInfo.samples) / MP3FileInfo.hz;
      SoundWave->SetSampleRate(MP3FileInfo.hz);
      SoundWave->SoundGroup = SOUNDGROUP_Voice;
      SoundWave->bLooping = false;
    }
    free(MP3FileInfo.buffer);
  
  return SoundWave;
  
}

void UElevenLabsRequest::CreateWaveFileFromResponse(class USoundWave* SoundWave, const FString CompleteFilePath)
{
  SoundWave->bDecompressedFromOgg = true;
  FSoundQualityInfo info;
  //SERIALIZE PCM AND FILL IN RAW DATA
  TArray < uint8 > rawSerialized;
  SerializeWaveFile(rawSerialized, SoundWave->RawPCMData, SoundWave->RawPCMDataSize, SoundWave->NumChannels, SoundWave->GetSampleRateForCurrentPlatform());
  FMemory::Memcpy(SoundWave->RawPCMData, rawSerialized.GetData(),SoundWave->RawPCMDataSize);
  FFileHelper::SaveArrayToFile(rawSerialized, *CompleteFilePath);
  
}