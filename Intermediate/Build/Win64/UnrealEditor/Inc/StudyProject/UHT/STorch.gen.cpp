// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StudyProject/Public/WorldStatics/STorch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTorch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STUDYPROJECT_API UClass* Z_Construct_UClass_ASTorch();
	STUDYPROJECT_API UClass* Z_Construct_UClass_ASTorch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StudyProject();
// End Cross Module References
	void ASTorch::StaticRegisterNativesASTorch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTorch);
	UClass* Z_Construct_UClass_ASTorch_NoRegister()
	{
		return ASTorch::StaticClass();
	}
	struct Z_Construct_UClass_ASTorch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodyStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointLightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointLightComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParticleSystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotatingMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotatingMovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTorch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StudyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTorch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldStatics/STorch.h" },
		{ "ModuleRelativePath", "Public/WorldStatics/STorch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTorch_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ASTorch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldStatics/STorch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASTorch_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTorch, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTorch_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTorch_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTorch_Statics::NewProp_BodyStaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ASTorch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldStatics/STorch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASTorch_Statics::NewProp_BodyStaticMeshComponent = { "BodyStaticMeshComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTorch, BodyStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTorch_Statics::NewProp_BodyStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTorch_Statics::NewProp_BodyStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTorch_Statics::NewProp_PointLightComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ASTorch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldStatics/STorch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASTorch_Statics::NewProp_PointLightComponent = { "PointLightComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTorch, PointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTorch_Statics::NewProp_PointLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTorch_Statics::NewProp_PointLightComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTorch_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ASTorch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldStatics/STorch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASTorch_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTorch, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTorch_Statics::NewProp_ParticleSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTorch_Statics::NewProp_ParticleSystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTorch_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ASTorch" },
		{ "ModuleRelativePath", "Public/WorldStatics/STorch.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASTorch_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTorch, ID), METADATA_PARAMS(Z_Construct_UClass_ASTorch_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTorch_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTorch_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ASTorch" },
		{ "ModuleRelativePath", "Public/WorldStatics/STorch.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTorch_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTorch, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ASTorch_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTorch_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTorch_Statics::NewProp_RotatingMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ASElectricityPole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldStatics/STorch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASTorch_Statics::NewProp_RotatingMovementComponent = { "RotatingMovementComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASTorch, RotatingMovementComponent), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTorch_Statics::NewProp_RotatingMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTorch_Statics::NewProp_RotatingMovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTorch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTorch_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTorch_Statics::NewProp_BodyStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTorch_Statics::NewProp_PointLightComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTorch_Statics::NewProp_ParticleSystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTorch_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTorch_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTorch_Statics::NewProp_RotatingMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTorch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTorch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTorch_Statics::ClassParams = {
		&ASTorch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTorch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTorch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTorch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTorch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTorch()
	{
		if (!Z_Registration_Info_UClass_ASTorch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTorch.OuterSingleton, Z_Construct_UClass_ASTorch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASTorch.OuterSingleton;
	}
	template<> STUDYPROJECT_API UClass* StaticClass<ASTorch>()
	{
		return ASTorch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTorch);
	ASTorch::~ASTorch() {}
	struct Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_WorldStatics_STorch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_WorldStatics_STorch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASTorch, ASTorch::StaticClass, TEXT("ASTorch"), &Z_Registration_Info_UClass_ASTorch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTorch), 3177196732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_WorldStatics_STorch_h_3624576274(TEXT("/Script/StudyProject"),
		Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_WorldStatics_STorch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_StudyProject_Source_StudyProject_Public_WorldStatics_STorch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
