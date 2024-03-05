// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Examples/SFlyable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STUDYPROJECT_SFlyable_generated_h
#error "SFlyable.generated.h already included, missing '#pragma once' in SFlyable.h"
#endif
#define STUDYPROJECT_SFlyable_generated_h

#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBirdData_Statics; \
	STUDYPROJECT_API static class UScriptStruct* StaticStruct();


template<> STUDYPROJECT_API UScriptStruct* StaticStruct<struct FBirdData>();

#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_SPARSE_DATA
#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_RPC_WRAPPERS
#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_ACCESSORS
#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STUDYPROJECT_API USFlyable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USFlyable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STUDYPROJECT_API, USFlyable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USFlyable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STUDYPROJECT_API USFlyable(USFlyable&&); \
	STUDYPROJECT_API USFlyable(const USFlyable&); \
public: \
	STUDYPROJECT_API virtual ~USFlyable();


#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STUDYPROJECT_API USFlyable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STUDYPROJECT_API USFlyable(USFlyable&&); \
	STUDYPROJECT_API USFlyable(const USFlyable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STUDYPROJECT_API, USFlyable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USFlyable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USFlyable) \
	STUDYPROJECT_API virtual ~USFlyable();


#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSFlyable(); \
	friend struct Z_Construct_UClass_USFlyable_Statics; \
public: \
	DECLARE_CLASS(USFlyable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StudyProject"), STUDYPROJECT_API) \
	DECLARE_SERIALIZER(USFlyable)


#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_GENERATED_UINTERFACE_BODY() \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_GENERATED_UINTERFACE_BODY() \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISFlyable() {} \
public: \
	typedef USFlyable UClassType; \
	typedef ISFlyable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_INCLASS_IINTERFACE \
protected: \
	virtual ~ISFlyable() {} \
public: \
	typedef USFlyable UClassType; \
	typedef ISFlyable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_30_PROLOG
#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_SPARSE_DATA \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_RPC_WRAPPERS \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_ACCESSORS \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_SPARSE_DATA \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_ACCESSORS \
	FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STUDYPROJECT_API UClass* StaticClass<class USFlyable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_StudyProject_Source_StudyProject_Public_Examples_SFlyable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
