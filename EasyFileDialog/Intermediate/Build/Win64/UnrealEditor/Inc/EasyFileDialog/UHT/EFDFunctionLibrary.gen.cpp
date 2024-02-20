// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFileDialog/Public/EFDFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFDFunctionLibrary() {}
// Cross Module References
	EASYFILEDIALOG_API UClass* Z_Construct_UClass_UEFDFunctionLibrary();
	EASYFILEDIALOG_API UClass* Z_Construct_UClass_UEFDFunctionLibrary_NoRegister();
	EASYFILEDIALOG_API UEnum* Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EasyFileDialog();
// End Cross Module References
	DEFINE_FUNCTION(UEFDFunctionLibrary::execOpenFolderDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEFDFunctionLibrary::OpenFolderDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_Out_OutFolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEFDFunctionLibrary::execSaveFileDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultFile);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileTypeDescription);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
		P_GET_PROPERTY(FByteProperty,Z_Param_Flags);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFilenames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEFDFunctionLibrary::SaveFileDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_DefaultFile,Z_Param_FileTypeDescription,Z_Param_FileType,EEasyFileDialogFlags(Z_Param_Flags),Z_Param_Out_OutFilenames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEFDFunctionLibrary::execOpenFileDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultFile);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
		P_GET_PROPERTY(FByteProperty,Z_Param_Flags);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFilenames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEFDFunctionLibrary::OpenFileDialog(Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_DefaultFile,Z_Param_FileTypes,EEasyFileDialogFlags(Z_Param_Flags),Z_Param_Out_OutFilenames);
		P_NATIVE_END;
	}
	void UEFDFunctionLibrary::StaticRegisterNativesUEFDFunctionLibrary()
	{
		UClass* Class = UEFDFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenFileDialog", &UEFDFunctionLibrary::execOpenFileDialog },
			{ "OpenFolderDialog", &UEFDFunctionLibrary::execOpenFolderDialog },
			{ "SaveFileDialog", &UEFDFunctionLibrary::execSaveFileDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics
	{
		struct EFDFunctionLibrary_eventOpenFileDialog_Parms
		{
			FString DialogTitle;
			FString DefaultPath;
			FString DefaultFile;
			FString FileTypes;
			TEnumAsByte<EEasyFileDialogFlags> Flags;
			TArray<FString> OutFilenames;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilenames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFilenames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, DialogTitle), METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultFile = { "DefaultFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, DefaultFile), METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_FileTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, FileTypes), METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_FileTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_FileTypes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, Flags), Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags, METADATA_PARAMS(nullptr, 0) }; // 581492967
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_OutFilenames_Inner = { "OutFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_OutFilenames = { "OutFilenames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFileDialog_Parms, OutFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EFDFunctionLibrary_eventOpenFileDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EFDFunctionLibrary_eventOpenFileDialog_Parms), &Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_DefaultFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_FileTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_OutFilenames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_OutFilenames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyFileDialog" },
		{ "Comment", "// Open File Dialog\n" },
		{ "ModuleRelativePath", "Public/EFDFunctionLibrary.h" },
		{ "ToolTip", "Open File Dialog" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEFDFunctionLibrary, nullptr, "OpenFileDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::EFDFunctionLibrary_eventOpenFileDialog_Parms), Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics
	{
		struct EFDFunctionLibrary_eventOpenFolderDialog_Parms
		{
			FString DialogTitle;
			FString DefaultPath;
			FString OutFolderName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFolderName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFolderDialog_Parms, DialogTitle), METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DialogTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DialogTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFolderDialog_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DefaultPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DefaultPath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_OutFolderName = { "OutFolderName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventOpenFolderDialog_Parms, OutFolderName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EFDFunctionLibrary_eventOpenFolderDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EFDFunctionLibrary_eventOpenFolderDialog_Parms), &Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_OutFolderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyFileDialog" },
		{ "Comment", "// Open Folder Dialog\n" },
		{ "ModuleRelativePath", "Public/EFDFunctionLibrary.h" },
		{ "ToolTip", "Open Folder Dialog" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEFDFunctionLibrary, nullptr, "OpenFolderDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::EFDFunctionLibrary_eventOpenFolderDialog_Parms), Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics
	{
		struct EFDFunctionLibrary_eventSaveFileDialog_Parms
		{
			FString DialogTitle;
			FString DefaultPath;
			FString DefaultFile;
			FString FileTypeDescription;
			FString FileType;
			TEnumAsByte<EEasyFileDialogFlags> Flags;
			TArray<FString> OutFilenames;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileTypeDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypeDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilenames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFilenames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, DialogTitle), METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DialogTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DialogTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultFile = { "DefaultFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, DefaultFile), METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileTypeDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileTypeDescription = { "FileTypeDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, FileTypeDescription), METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileTypeDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileTypeDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, FileType), METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileType_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, Flags), Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags, METADATA_PARAMS(nullptr, 0) }; // 581492967
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_OutFilenames_Inner = { "OutFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_OutFilenames = { "OutFilenames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EFDFunctionLibrary_eventSaveFileDialog_Parms, OutFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EFDFunctionLibrary_eventSaveFileDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EFDFunctionLibrary_eventSaveFileDialog_Parms), &Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_DefaultFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileTypeDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_OutFilenames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_OutFilenames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyFileDialog" },
		{ "Comment", "// Save File Dialog\n" },
		{ "ModuleRelativePath", "Public/EFDFunctionLibrary.h" },
		{ "ToolTip", "Save File Dialog" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEFDFunctionLibrary, nullptr, "SaveFileDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::EFDFunctionLibrary_eventSaveFileDialog_Parms), Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEFDFunctionLibrary);
	UClass* Z_Construct_UClass_UEFDFunctionLibrary_NoRegister()
	{
		return UEFDFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEFDFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEFDFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyFileDialog,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEFDFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEFDFunctionLibrary_OpenFileDialog, "OpenFileDialog" }, // 3632237747
		{ &Z_Construct_UFunction_UEFDFunctionLibrary_OpenFolderDialog, "OpenFolderDialog" }, // 97815195
		{ &Z_Construct_UFunction_UEFDFunctionLibrary_SaveFileDialog, "SaveFileDialog" }, // 2711772003
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEFDFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EFDFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/EFDFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEFDFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEFDFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEFDFunctionLibrary_Statics::ClassParams = {
		&UEFDFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEFDFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEFDFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEFDFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UEFDFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEFDFunctionLibrary.OuterSingleton, Z_Construct_UClass_UEFDFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEFDFunctionLibrary.OuterSingleton;
	}
	template<> EASYFILEDIALOG_API UClass* StaticClass<UEFDFunctionLibrary>()
	{
		return UEFDFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEFDFunctionLibrary);
	UEFDFunctionLibrary::~UEFDFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEFDFunctionLibrary, UEFDFunctionLibrary::StaticClass, TEXT("UEFDFunctionLibrary"), &Z_Registration_Info_UClass_UEFDFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEFDFunctionLibrary), 2156565816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_648390588(TEXT("/Script/EasyFileDialog"),
		Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonMP_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
