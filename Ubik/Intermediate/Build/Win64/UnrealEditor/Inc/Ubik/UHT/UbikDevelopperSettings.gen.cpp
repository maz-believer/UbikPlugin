// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ubik/Public/UbikDevelopperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUbikDevelopperSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UBIK_API UClass* Z_Construct_UClass_UUbikDevelopperSettings();
	UBIK_API UClass* Z_Construct_UClass_UUbikDevelopperSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Ubik();
// End Cross Module References
	void UUbikDevelopperSettings::StaticRegisterNativesUUbikDevelopperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUbikDevelopperSettings);
	UClass* Z_Construct_UClass_UUbikDevelopperSettings_NoRegister()
	{
		return UUbikDevelopperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUbikDevelopperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevenLabsApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ElevenLabsApiKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUbikDevelopperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Ubik,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUbikDevelopperSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "API KEY ELEVENLABS UBIK" },
		{ "IncludePath", "UbikDevelopperSettings.h" },
		{ "ModuleRelativePath", "Public/UbikDevelopperSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUbikDevelopperSettings_Statics::NewProp_ElevenLabsApiKey_MetaData[] = {
		{ "Category", "UBIK" },
		{ "ModuleRelativePath", "Public/UbikDevelopperSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUbikDevelopperSettings_Statics::NewProp_ElevenLabsApiKey = { "ElevenLabsApiKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUbikDevelopperSettings, ElevenLabsApiKey), METADATA_PARAMS(Z_Construct_UClass_UUbikDevelopperSettings_Statics::NewProp_ElevenLabsApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUbikDevelopperSettings_Statics::NewProp_ElevenLabsApiKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUbikDevelopperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUbikDevelopperSettings_Statics::NewProp_ElevenLabsApiKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUbikDevelopperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUbikDevelopperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUbikDevelopperSettings_Statics::ClassParams = {
		&UUbikDevelopperSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUbikDevelopperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUbikDevelopperSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUbikDevelopperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUbikDevelopperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUbikDevelopperSettings()
	{
		if (!Z_Registration_Info_UClass_UUbikDevelopperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUbikDevelopperSettings.OuterSingleton, Z_Construct_UClass_UUbikDevelopperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUbikDevelopperSettings.OuterSingleton;
	}
	template<> UBIK_API UClass* StaticClass<UUbikDevelopperSettings>()
	{
		return UUbikDevelopperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUbikDevelopperSettings);
	UUbikDevelopperSettings::~UUbikDevelopperSettings() {}
	struct Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikDevelopperSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikDevelopperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUbikDevelopperSettings, UUbikDevelopperSettings::StaticClass, TEXT("UUbikDevelopperSettings"), &Z_Registration_Info_UClass_UUbikDevelopperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUbikDevelopperSettings), 3313161407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikDevelopperSettings_h_4070445326(TEXT("/Script/Ubik"),
		Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikDevelopperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikDevelopperSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
