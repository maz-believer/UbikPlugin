// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ubik/Public/UbikTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUbikTypes() {}
// Cross Module References
	UBIK_API UEnum* Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice();
	UPackage* Z_Construct_UPackage__Script_Ubik();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUbikElevenLabsVoice;
	static UEnum* EUbikElevenLabsVoice_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUbikElevenLabsVoice.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUbikElevenLabsVoice.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice, Z_Construct_UPackage__Script_Ubik(), TEXT("EUbikElevenLabsVoice"));
		}
		return Z_Registration_Info_UEnum_EUbikElevenLabsVoice.OuterSingleton;
	}
	template<> UBIK_API UEnum* StaticEnum<EUbikElevenLabsVoice>()
	{
		return EUbikElevenLabsVoice_StaticEnum();
	}
	struct Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice_Statics::Enumerators[] = {
		{ "EUbikElevenLabsVoice::onwK4e9ZLuTAKqWW03F9", (int64)EUbikElevenLabsVoice::onwK4e9ZLuTAKqWW03F9 },
		{ "EUbikElevenLabsVoice::N2lVS1w4EtoT3dr4eOWO", (int64)EUbikElevenLabsVoice::N2lVS1w4EtoT3dr4eOWO },
		{ "EUbikElevenLabsVoice::XB0fDUnXU5powFXDhCwa", (int64)EUbikElevenLabsVoice::XB0fDUnXU5powFXDhCwa },
		{ "EUbikElevenLabsVoice::MvRvELwIZHeSJ4sRsRXg", (int64)EUbikElevenLabsVoice::MvRvELwIZHeSJ4sRsRXg },
		{ "EUbikElevenLabsVoice::GBv7mTt0atIp3Br8iCZE", (int64)EUbikElevenLabsVoice::GBv7mTt0atIp3Br8iCZE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines Elevenlabs Voices */" },
		{ "GBv7mTt0atIp3Br8iCZE.Comment", "//Kwami\n" },
		{ "GBv7mTt0atIp3Br8iCZE.DisplayName", "Ship_Computer" },
		{ "GBv7mTt0atIp3Br8iCZE.Name", "EUbikElevenLabsVoice::GBv7mTt0atIp3Br8iCZE" },
		{ "GBv7mTt0atIp3Br8iCZE.ToolTip", "Kwami" },
		{ "ModuleRelativePath", "Public/UbikTypes.h" },
		{ "MvRvELwIZHeSJ4sRsRXg.Comment", "//Charlotte\n" },
		{ "MvRvELwIZHeSJ4sRsRXg.DisplayName", "Tiberius" },
		{ "MvRvELwIZHeSJ4sRsRXg.Name", "EUbikElevenLabsVoice::MvRvELwIZHeSJ4sRsRXg" },
		{ "MvRvELwIZHeSJ4sRsRXg.ToolTip", "Charlotte" },
		{ "N2lVS1w4EtoT3dr4eOWO.Comment", "//Daniel\n" },
		{ "N2lVS1w4EtoT3dr4eOWO.DisplayName", "Vawn" },
		{ "N2lVS1w4EtoT3dr4eOWO.Name", "EUbikElevenLabsVoice::N2lVS1w4EtoT3dr4eOWO" },
		{ "N2lVS1w4EtoT3dr4eOWO.ToolTip", "Daniel" },
		{ "onwK4e9ZLuTAKqWW03F9.DisplayName", "Town_Elder" },
		{ "onwK4e9ZLuTAKqWW03F9.Name", "EUbikElevenLabsVoice::onwK4e9ZLuTAKqWW03F9" },
		{ "ToolTip", "Defines Elevenlabs Voices" },
		{ "XB0fDUnXU5powFXDhCwa.Comment", "//Callum\n" },
		{ "XB0fDUnXU5powFXDhCwa.DisplayName", "Serai" },
		{ "XB0fDUnXU5powFXDhCwa.Name", "EUbikElevenLabsVoice::XB0fDUnXU5powFXDhCwa" },
		{ "XB0fDUnXU5powFXDhCwa.ToolTip", "Callum" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Ubik,
		nullptr,
		"EUbikElevenLabsVoice",
		"EUbikElevenLabsVoice",
		Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice()
	{
		if (!Z_Registration_Info_UEnum_EUbikElevenLabsVoice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUbikElevenLabsVoice.InnerSingleton, Z_Construct_UEnum_Ubik_EUbikElevenLabsVoice_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUbikElevenLabsVoice.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikTypes_h_Statics::EnumInfo[] = {
		{ EUbikElevenLabsVoice_StaticEnum, TEXT("EUbikElevenLabsVoice"), &Z_Registration_Info_UEnum_EUbikElevenLabsVoice, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1954919648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikTypes_h_2395383138(TEXT("/Script/Ubik"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_Ubik_Source_Ubik_Public_UbikTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
