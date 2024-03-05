// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StudyProject/Public/Examples/SFlyable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSFlyable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	STUDYPROJECT_API UClass* Z_Construct_UClass_USFlyable();
	STUDYPROJECT_API UClass* Z_Construct_UClass_USFlyable_NoRegister();
	STUDYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBirdData();
	UPackage* Z_Construct_UPackage__Script_StudyProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BirdData;
class UScriptStruct* FBirdData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BirdData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BirdData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBirdData, Z_Construct_UPackage__Script_StudyProject(), TEXT("BirdData"));
	}
	return Z_Registration_Info_UScriptStruct_BirdData.OuterSingleton;
}
template<> STUDYPROJECT_API UScriptStruct* StaticStruct<FBirdData>()
{
	return FBirdData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBirdData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBirdData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/SFlyable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBirdData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBirdData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBirdData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Examples/SFlyable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBirdData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBirdData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBirdData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBirdData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBirdData_Statics::NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Examples/SFlyable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBirdData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBirdData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBirdData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBirdData_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBirdData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBirdData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBirdData_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBirdData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StudyProject,
		nullptr,
		&NewStructOps,
		"BirdData",
		sizeof(FBirdData),
		alignof(FBirdData),
		Z_Construct_UScriptStruct_FBirdData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBirdData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBirdData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBirdData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBirdData()
	{
		if (!Z_Registration_Info_UScriptStruct_BirdData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BirdData.InnerSingleton, Z_Construct_UScriptStruct_FBirdData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BirdData.InnerSingleton;
	}
	void USFlyable::StaticRegisterNativesUSFlyable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USFlyable);
	UClass* Z_Construct_UClass_USFlyable_NoRegister()
	{
		return USFlyable::StaticClass();
	}
	struct Z_Construct_UClass_USFlyable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USFlyable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StudyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USFlyable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/SFlyable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USFlyable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISFlyable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USFlyable_Statics::ClassParams = {
		&USFlyable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USFlyable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USFlyable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USFlyable()
	{
		if (!Z_Registration_Info_UClass_USFlyable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USFlyable.OuterSingleton, Z_Construct_UClass_USFlyable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USFlyable.OuterSingleton;
	}
	template<> STUDYPROJECT_API UClass* StaticClass<USFlyable>()
	{
		return USFlyable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USFlyable);
	USFlyable::~USFlyable() {}
	struct Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_Statics::ScriptStructInfo[] = {
		{ FBirdData::StaticStruct, Z_Construct_UScriptStruct_FBirdData_Statics::NewStructOps, TEXT("BirdData"), &Z_Registration_Info_UScriptStruct_BirdData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBirdData), 1382695253U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USFlyable, USFlyable::StaticClass, TEXT("USFlyable"), &Z_Registration_Info_UClass_USFlyable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USFlyable), 1547713423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_2970989780(TEXT("/Script/StudyProject"),
		Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
