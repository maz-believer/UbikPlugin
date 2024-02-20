// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ubik/Public/UbikElevenLabsApiRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUbikElevenLabsApiRequest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UBIK_API UClass* Z_Construct_UClass_UElevenLabsRequest();
	UBIK_API UClass* Z_Construct_UClass_UElevenLabsRequest_NoRegister();
	UBIK_API UEnum* Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice();
	UBIK_API UFunction* Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature();
	UBIK_API UFunction* Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Ubik();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics
	{
		struct ElevenLabsRequest_eventOnActionCompleted_Parms
		{
			USoundWave* SoundWave;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ElevenLabsRequest_eventOnActionCompleted_Parms, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics::NewProp_SoundWave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UbikElevenLabsApiRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElevenLabsRequest, nullptr, "OnActionCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics::ElevenLabsRequest_eventOnActionCompleted_Parms), Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics
	{
		struct ElevenLabsRequest_eventOnActionFailed_Parms
		{
			FString ErrorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ElevenLabsRequest_eventOnActionFailed_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UbikElevenLabsApiRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElevenLabsRequest, nullptr, "OnActionFailed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::ElevenLabsRequest_eventOnActionFailed_Parms), Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UElevenLabsRequest::execTextToSpeechInit)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EUbikElevenLabsVoice,Z_Param_VoiceElevenlabsID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Stability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SimilarityBoost);
		P_GET_PROPERTY(FStrProperty,Z_Param_API_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UElevenLabsRequest**)Z_Param__Result=UElevenLabsRequest::TextToSpeechInit(Z_Param_WorldContextObject,EUbikElevenLabsVoice(Z_Param_VoiceElevenlabsID),Z_Param_Text,Z_Param_Stability,Z_Param_SimilarityBoost,Z_Param_API_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElevenLabsRequest::execCreateWaveFileFromResponse)
	{
		P_GET_OBJECT(USoundWave,Z_Param_SoundWave);
		P_GET_PROPERTY(FStrProperty,Z_Param_CompleteFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UElevenLabsRequest::CreateWaveFileFromResponse(Z_Param_SoundWave,Z_Param_CompleteFilePath);
		P_NATIVE_END;
	}
	void UElevenLabsRequest::StaticRegisterNativesUElevenLabsRequest()
	{
		UClass* Class = UElevenLabsRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWaveFileFromResponse", &UElevenLabsRequest::execCreateWaveFileFromResponse },
			{ "TextToSpeechInit", &UElevenLabsRequest::execTextToSpeechInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics
	{
		struct ElevenLabsRequest_eventCreateWaveFileFromResponse_Parms
		{
			USoundWave* SoundWave;
			FString CompleteFilePath;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompleteFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CompleteFilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ElevenLabsRequest_eventCreateWaveFileFromResponse_Parms, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::NewProp_CompleteFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::NewProp_CompleteFilePath = { "CompleteFilePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ElevenLabsRequest_eventCreateWaveFileFromResponse_Parms, CompleteFilePath), METADATA_PARAMS(Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::NewProp_CompleteFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::NewProp_CompleteFilePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::NewProp_SoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::NewProp_CompleteFilePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "UBIK" },
		{ "Comment", "/**\n* @brief Convert text(SSML format) to voice. The ResponseCode is server response code or -1(Unknow error.), and the Data is raw data for audio file if sucess. //https://elevenlabs.io/docs/api-reference/text-to-speechwww\n* @param SSML - SSML document\n* @param AudioFormat - Audio format\n* @param FileName - ex.: \"audio.wav\"\n* @param FileDirectory - ex.: \"D:\\Project\\ProjectGame\\Saved\"\n* @param OnRequestDoneDelegate\n*/" },
		{ "DisplayName", "Text To Speech - Create Wave File" },
		{ "ModuleRelativePath", "Public/UbikElevenLabsApiRequest.h" },
		{ "ToolTip", "@brief Convert text(SSML format) to voice. The ResponseCode is server response code or -1(Unknow error.), and the Data is raw data for audio file if sucess. //https://elevenlabs.io/docs/api-reference/text-to-speechwww\n@param SSML - SSML document\n@param AudioFormat - Audio format\n@param FileName - ex.: \"audio.wav\"\n@param FileDirectory - ex.: \"D:\\Project\\ProjectGame\\Saved\"\n@param OnRequestDoneDelegate" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElevenLabsRequest, nullptr, "CreateWaveFileFromResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::ElevenLabsRequest_eventCreateWaveFileFromResponse_Parms), Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics
	{
		struct ElevenLabsRequest_eventTextToSpeechInit_Parms
		{
			UObject* WorldContextObject;
			EUbikElevenLabsVoice VoiceElevenlabsID;
			FString Text;
			float Stability;
			float SimilarityBoost;
			FString API_Key;
			UElevenLabsRequest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VoiceElevenlabsID_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VoiceElevenlabsID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stability;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimilarityBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_API_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_API_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeechInit_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_VoiceElevenlabsID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_VoiceElevenlabsID = { "VoiceElevenlabsID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeechInit_Parms, VoiceElevenlabsID), Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice, METADATA_PARAMS(nullptr, 0) }; // 1954919648
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeechInit_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_Stability = { "Stability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeechInit_Parms, Stability), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_SimilarityBoost = { "SimilarityBoost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeechInit_Parms, SimilarityBoost), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_API_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_API_Key = { "API_Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeechInit_Parms, API_Key), METADATA_PARAMS(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_API_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_API_Key_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeechInit_Parms, ReturnValue), Z_Construct_UClass_UElevenLabsRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_VoiceElevenlabsID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_VoiceElevenlabsID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_Stability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_SimilarityBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_API_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "UBIK" },
		{ "Comment", "/**\n* @brief Convert text to voice. \n* @param WorldContextObject - \n* @param VoiceElevenlabsID - The ID of the voice in ElevensLabs\n* @param Text - The text that we want convert to speech\n* @param Stability - The stability slider determines how stable the voice is and the randomness between each generation.\n* @param SimilarityBoost -\n* @param API_Key -\n* @ref https://elevenlabs.io/docs/speech-synthesis/voice-settings\n*/" },
		{ "DisplayName", "Text To Speech" },
		{ "ModuleRelativePath", "Public/UbikElevenLabsApiRequest.h" },
		{ "ToolTip", "@brief Convert text to voice.\n@param WorldContextObject -\n@param VoiceElevenlabsID - The ID of the voice in ElevensLabs\n@param Text - The text that we want convert to speech\n@param Stability - The stability slider determines how stable the voice is and the randomness between each generation.\n@param SimilarityBoost -\n@param API_Key -\n@ref https://elevenlabs.io/docs/speech-synthesis/voice-settings" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElevenLabsRequest, nullptr, "TextToSpeechInit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::ElevenLabsRequest_eventTextToSpeechInit_Parms), Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UElevenLabsRequest);
	UClass* Z_Construct_UClass_UElevenLabsRequest_NoRegister()
	{
		return UElevenLabsRequest::StaticClass();
	}
	struct Z_Construct_UClass_UElevenLabsRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElevenLabsRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Ubik,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElevenLabsRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElevenLabsRequest_CreateWaveFileFromResponse, "CreateWaveFileFromResponse" }, // 3335108430
		{ &Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature, "OnActionCompleted__DelegateSignature" }, // 4146218926
		{ &Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature, "OnActionFailed__DelegateSignature" }, // 3809024334
		{ &Z_Construct_UFunction_UElevenLabsRequest_TextToSpeechInit, "TextToSpeechInit" }, // 4031455567
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElevenLabsRequest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UbikElevenLabsApiRequest.h" },
		{ "ModuleRelativePath", "Public/UbikElevenLabsApiRequest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UbikElevenLabsApiRequest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UElevenLabsRequest, OnCompleted), Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnCompleted_MetaData)) }; // 4146218926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/UbikElevenLabsApiRequest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UElevenLabsRequest, OnFailed), Z_Construct_UDelegateFunction_UElevenLabsRequest_OnActionFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnFailed_MetaData)) }; // 3809024334
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UbikElevenLabsApiRequest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UElevenLabsRequest, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElevenLabsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElevenLabsRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElevenLabsRequest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UElevenLabsRequest_Statics::ClassParams = {
		&UElevenLabsRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UElevenLabsRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElevenLabsRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElevenLabsRequest()
	{
		if (!Z_Registration_Info_UClass_UElevenLabsRequest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElevenLabsRequest.OuterSingleton, Z_Construct_UClass_UElevenLabsRequest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UElevenLabsRequest.OuterSingleton;
	}
	template<> UBIK_API UClass* StaticClass<UElevenLabsRequest>()
	{
		return UElevenLabsRequest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElevenLabsRequest);
	UElevenLabsRequest::~UElevenLabsRequest() {}
	struct Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UElevenLabsRequest, UElevenLabsRequest::StaticClass, TEXT("UElevenLabsRequest"), &Z_Registration_Info_UClass_UElevenLabsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElevenLabsRequest), 3501069201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_577180734(TEXT("/Script/Ubik"),
		Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
