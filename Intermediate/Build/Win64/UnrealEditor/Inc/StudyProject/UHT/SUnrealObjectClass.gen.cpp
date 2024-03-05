// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StudyProject/Public/SUnrealObjectClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUnrealObjectClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STUDYPROJECT_API UClass* Z_Construct_UClass_USUnrealObjectClass();
	STUDYPROJECT_API UClass* Z_Construct_UClass_USUnrealObjectClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StudyProject();
// End Cross Module References
	DEFINE_FUNCTION(USUnrealObjectClass::execHelloUnreal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelloUnreal();
		P_NATIVE_END;
	}
	void USUnrealObjectClass::StaticRegisterNativesUSUnrealObjectClass()
	{
		UClass* Class = USUnrealObjectClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HelloUnreal", &USUnrealObjectClass::execHelloUnreal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USUnrealObjectClass_HelloUnreal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USUnrealObjectClass_HelloUnreal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SUnrealObjectClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUnrealObjectClass_HelloUnreal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUnrealObjectClass, nullptr, "HelloUnreal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USUnrealObjectClass_HelloUnreal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USUnrealObjectClass_HelloUnreal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USUnrealObjectClass_HelloUnreal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUnrealObjectClass_HelloUnreal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUnrealObjectClass);
	UClass* Z_Construct_UClass_USUnrealObjectClass_NoRegister()
	{
		return USUnrealObjectClass::StaticClass();
	}
	struct Z_Construct_UClass_USUnrealObjectClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USUnrealObjectClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StudyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USUnrealObjectClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USUnrealObjectClass_HelloUnreal, "HelloUnreal" }, // 304501056
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USUnrealObjectClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SUnrealObjectClass.h" },
		{ "ModuleRelativePath", "Public/SUnrealObjectClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USUnrealObjectClass_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/SUnrealObjectClass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USUnrealObjectClass_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USUnrealObjectClass, Name), METADATA_PARAMS(Z_Construct_UClass_USUnrealObjectClass_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USUnrealObjectClass_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USUnrealObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUnrealObjectClass_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USUnrealObjectClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUnrealObjectClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USUnrealObjectClass_Statics::ClassParams = {
		&USUnrealObjectClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USUnrealObjectClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USUnrealObjectClass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USUnrealObjectClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USUnrealObjectClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USUnrealObjectClass()
	{
		if (!Z_Registration_Info_UClass_USUnrealObjectClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUnrealObjectClass.OuterSingleton, Z_Construct_UClass_USUnrealObjectClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USUnrealObjectClass.OuterSingleton;
	}
	template<> STUDYPROJECT_API UClass* StaticClass<USUnrealObjectClass>()
	{
		return USUnrealObjectClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USUnrealObjectClass);
	USUnrealObjectClass::~USUnrealObjectClass() {}
	struct Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_SUnrealObjectClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_SUnrealObjectClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USUnrealObjectClass, USUnrealObjectClass::StaticClass, TEXT("USUnrealObjectClass"), &Z_Registration_Info_UClass_USUnrealObjectClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUnrealObjectClass), 2377986111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_SUnrealObjectClass_h_3483453203(TEXT("/Script/StudyProject"),
		Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_SUnrealObjectClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_SUnrealObjectClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
