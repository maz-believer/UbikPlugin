// Copyright Believer Research and Development Team . All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UbikTypes.h"
#include "Interfaces/IHttpRequest.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UbikElevenLabsApiRequest.generated.h"

UCLASS()
class UBIK_API UElevenLabsRequest : public UBlueprintAsyncActionBase {

  GENERATED_BODY()
  static FString FilePath;
  
public:
  DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionCompleted, USoundWave*, SoundWave);
  DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionFailed, const FString&, ErrorMessage);

  /**
* @brief Convert USoundWave object type to .wav file
* @param SoundWave - Soudwave created from the Elevenlabs mp3 result
* @param CompleteFilePath - The location the we want to save the .wav file result
*/
  UFUNCTION(BlueprintCallable, Category = "UBIK", meta = (WorldContext = "WorldContextObject"), DisplayName = "Text To Speech - Create Wave File")
  static void CreateWaveFileFromResponse(class USoundWave* SoundWave, const FString CompleteFilePath);

  /**
* @brief Convert text to voice. //https://elevenlabs.io/docs/api-reference/text-to-speech
* @param WorldContextObject - 
* @param VoiceElevenlabsID - The ID of the voice in ElevensLabs
* @param Text - The text that we want convert to speech
* @param Stability -  see @ref
* @param SimilarityBoost -  see @ref
* @param API_Key - Elevenlabs API key, defined in Editor Settings
* @ref https://elevenlabs.io/docs/speech-synthesis/voice-settings
*/
  UFUNCTION(BlueprintCallable, Category = "UBIK", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Text To Speech"))
  static UElevenLabsRequest* TextToSpeechInit(UObject* WorldContextObject, EUbikElevenLabsVoice VoiceElevenlabsID, const FString& Text, float Stability, float SimilarityBoost, const FString& API_Key);

  UPROPERTY(BlueprintAssignable)
  FOnActionCompleted OnCompleted;

  UPROPERTY(BlueprintAssignable)
  FOnActionFailed OnFailed;


private:
  USoundWave* CreateSoundWaveFromResponse(const TArray<uint8>& AudioData);
  void RequestTextToSpeech(const FString VoiceId, const FString& Text, float Stability, float SimilarityBoost, const FString& API_Key);
  void OnRequestCompleted(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
  
  UPROPERTY()
  UObject* WorldContextObject;
  
  
};
