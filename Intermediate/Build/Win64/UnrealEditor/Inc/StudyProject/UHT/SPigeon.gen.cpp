// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StudyProject/Public/Examples/SPigeon.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPigeon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STUDYPROJECT_API UClass* Z_Construct_UClass_USFlyable_NoRegister();
	STUDYPROJECT_API UClass* Z_Construct_UClass_USPigeon();
	STUDYPROJECT_API UClass* Z_Construct_UClass_USPigeon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StudyProject();
// End Cross Module References
	void USPigeon::StaticRegisterNativesUSPigeon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USPigeon);
	UClass* Z_Construct_UClass_USPigeon_NoRegister()
	{
		return USPigeon::StaticClass();
	}
	struct Z_Construct_UClass_USPigeon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USPigeon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StudyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPigeon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Examples/SPigeon.h" },
		{ "ModuleRelativePath", "Public/Examples/SPigeon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPigeon_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Examples/SPigeon.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USPigeon_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USPigeon, Name), METADATA_PARAMS(Z_Construct_UClass_USPigeon_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPigeon_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USPigeon_Statics::NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Examples/SPigeon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USPigeon_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USPigeon, ID), METADATA_PARAMS(Z_Construct_UClass_USPigeon_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USPigeon_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USPigeon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPigeon_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USPigeon_Statics::NewProp_ID,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USPigeon_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USFlyable_NoRegister, (int32)VTABLE_OFFSET(USPigeon, ISFlyable), false },  // 1547713423
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USPigeon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USPigeon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USPigeon_Statics::ClassParams = {
		&USPigeon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USPigeon_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USPigeon_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USPigeon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USPigeon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USPigeon()
	{
		if (!Z_Registration_Info_UClass_USPigeon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USPigeon.OuterSingleton, Z_Construct_UClass_USPigeon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USPigeon.OuterSingleton;
	}
	template<> STUDYPROJECT_API UClass* StaticClass<USPigeon>()
	{
		return USPigeon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USPigeon);
	USPigeon::~USPigeon() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USPigeon)
	struct Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SPigeon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SPigeon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USPigeon, USPigeon::StaticClass, TEXT("USPigeon"), &Z_Registration_Info_UClass_USPigeon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USPigeon), 843261768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SPigeon_h_4216404219(TEXT("/Script/StudyProject"),
		Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SPigeon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SPigeon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
