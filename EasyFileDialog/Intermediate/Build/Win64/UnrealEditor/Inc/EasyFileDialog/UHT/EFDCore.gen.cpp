// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFileDialog/Public/EFDCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFDCore() {}
// Cross Module References
	EASYFILEDIALOG_API UEnum* Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags();
	UPackage* Z_Construct_UPackage__Script_EasyFileDialog();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEasyFileDialogFlags;
	static UEnum* EEasyFileDialogFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEasyFileDialogFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEasyFileDialogFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags, Z_Construct_UPackage__Script_EasyFileDialog(), TEXT("EEasyFileDialogFlags"));
		}
		return Z_Registration_Info_UEnum_EEasyFileDialogFlags.OuterSingleton;
	}
	template<> EASYFILEDIALOG_API UEnum* StaticEnum<EEasyFileDialogFlags>()
	{
		return EEasyFileDialogFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::Enumerators[] = {
		{ "Single", (int64)Single },
		{ "Multiple", (int64)Multiple },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Flag Enum for saving multiple or single file's\n" },
		{ "ModuleRelativePath", "Public/EFDCore.h" },
		{ "Multiple.Comment", "// No flags\n" },
		{ "Multiple.Name", "Multiple" },
		{ "Multiple.ToolTip", "No flags" },
		{ "Single.Name", "Single" },
		{ "ToolTip", "Flag Enum for saving multiple or single file's" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyFileDialog,
		nullptr,
		"EEasyFileDialogFlags",
		"EEasyFileDialogFlags",
		Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags()
	{
		if (!Z_Registration_Info_UEnum_EEasyFileDialogFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEasyFileDialogFlags.InnerSingleton, Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEasyFileDialogFlags.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDCore_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDCore_h_Statics::EnumInfo[] = {
		{ EEasyFileDialogFlags_StaticEnum, TEXT("EEasyFileDialogFlags"), &Z_Registration_Info_UEnum_EEasyFileDialogFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 581492967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDCore_h_2259691767(TEXT("/Script/EasyFileDialog"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDCore_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDCore_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
