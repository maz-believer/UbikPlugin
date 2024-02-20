// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UbikElevenLabsApiRequest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UElevenLabsRequest;
class UObject;
class USoundWave;
enum class EUbikElevenLabsVoice : uint8;
#ifdef UBIK_UbikElevenLabsApiRequest_generated_h
#error "UbikElevenLabsApiRequest.generated.h already included, missing '#pragma once' in UbikElevenLabsApiRequest.h"
#endif
#define UBIK_UbikElevenLabsApiRequest_generated_h

#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_20_DELEGATE \
struct ElevenLabsRequest_eventOnActionCompleted_Parms \
{ \
	USoundWave* SoundWave; \
}; \
static inline void FOnActionCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnActionCompleted, USoundWave* SoundWave) \
{ \
	ElevenLabsRequest_eventOnActionCompleted_Parms Parms; \
	Parms.SoundWave=SoundWave; \
	OnActionCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_21_DELEGATE \
struct ElevenLabsRequest_eventOnActionFailed_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FOnActionFailed_DelegateWrapper(const FMulticastScriptDelegate& OnActionFailed, const FString& ErrorMessage) \
{ \
	ElevenLabsRequest_eventOnActionFailed_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	OnActionFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_SPARSE_DATA
#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTextToSpeechInit); \
	DECLARE_FUNCTION(execCreateWaveFileFromResponse);


#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTextToSpeechInit); \
	DECLARE_FUNCTION(execCreateWaveFileFromResponse);


#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_ACCESSORS
#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElevenLabsRequest(); \
	friend struct Z_Construct_UClass_UElevenLabsRequest_Statics; \
public: \
	DECLARE_CLASS(UElevenLabsRequest, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ubik"), NO_API) \
	DECLARE_SERIALIZER(UElevenLabsRequest)


#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUElevenLabsRequest(); \
	friend struct Z_Construct_UClass_UElevenLabsRequest_Statics; \
public: \
	DECLARE_CLASS(UElevenLabsRequest, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ubik"), NO_API) \
	DECLARE_SERIALIZER(UElevenLabsRequest)


#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElevenLabsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElevenLabsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElevenLabsRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElevenLabsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElevenLabsRequest(UElevenLabsRequest&&); \
	NO_API UElevenLabsRequest(const UElevenLabsRequest&); \
public: \
	NO_API virtual ~UElevenLabsRequest();


#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElevenLabsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElevenLabsRequest(UElevenLabsRequest&&); \
	NO_API UElevenLabsRequest(const UElevenLabsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElevenLabsRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElevenLabsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElevenLabsRequest) \
	NO_API virtual ~UElevenLabsRequest();


#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_13_PROLOG
#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_SPARSE_DATA \
	FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_RPC_WRAPPERS \
	FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_ACCESSORS \
	FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_INCLASS \
	FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_SPARSE_DATA \
	FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_ACCESSORS \
	FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UBIK_API UClass* StaticClass<class UElevenLabsRequest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikElevenLabsApiRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
