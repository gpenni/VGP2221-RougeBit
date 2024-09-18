// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Collectable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ROUGE_Collectable_generated_h
#error "Collectable.generated.h already included, missing '#pragma once' in Collectable.h"
#endif
#define ROUGE_Collectable_generated_h

#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangePullRadius); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnInnerOverlap);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend struct Z_Construct_UClass_ACollectable_Statics; \
public: \
	DECLARE_CLASS(ACollectable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rouge"), NO_API) \
	DECLARE_SERIALIZER(ACollectable)


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACollectable(ACollectable&&); \
	ACollectable(const ACollectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectable) \
	NO_API virtual ~ACollectable();


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_9_PROLOG
#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROUGE_API UClass* StaticClass<class ACollectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
