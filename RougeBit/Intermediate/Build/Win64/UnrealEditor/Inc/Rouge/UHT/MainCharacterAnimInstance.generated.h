// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCharacterAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROUGE_MainCharacterAnimInstance_generated_h
#error "MainCharacterAnimInstance.generated.h already included, missing '#pragma once' in MainCharacterAnimInstance.h"
#endif
#define ROUGE_MainCharacterAnimInstance_generated_h

#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UMainCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMainCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Rouge"), NO_API) \
	DECLARE_SERIALIZER(UMainCharacterAnimInstance)


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainCharacterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMainCharacterAnimInstance(UMainCharacterAnimInstance&&); \
	UMainCharacterAnimInstance(const UMainCharacterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainCharacterAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainCharacterAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainCharacterAnimInstance) \
	NO_API virtual ~UMainCharacterAnimInstance();


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_12_PROLOG
#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROUGE_API UClass* StaticClass<class UMainCharacterAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
