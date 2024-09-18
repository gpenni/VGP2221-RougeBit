// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROUGE_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define ROUGE_MainCharacter_generated_h

#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_10_DELEGATE \
ROUGE_API void FOnMaxHealthIncrease_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthIncrease);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_11_DELEGATE \
ROUGE_API void FOnHealthDecrease_DelegateWrapper(const FMulticastScriptDelegate& OnHealthDecrease);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_12_DELEGATE \
ROUGE_API void FOnHealthIncrease_DelegateWrapper(const FMulticastScriptDelegate& OnHealthIncrease);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_13_DELEGATE \
ROUGE_API void FOnGameScoreChange_DelegateWrapper(const FMulticastScriptDelegate& OnGameScoreChange);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_14_DELEGATE \
ROUGE_API void FOnShieldStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnShieldStateChange);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_15_DELEGATE \
ROUGE_API void FOnShieldDamaged_DelegateWrapper(const FMulticastScriptDelegate& OnShieldDamaged);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_16_DELEGATE \
ROUGE_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_17_DELEGATE \
ROUGE_API void FOnUpgradePending_DelegateWrapper(const FMulticastScriptDelegate& OnUpgradePending);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_18_DELEGATE \
ROUGE_API void FOnShoot_DelegateWrapper(const FMulticastScriptDelegate& OnShoot);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_19_DELEGATE \
ROUGE_API void FOnPullRadiusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPullRadiusChanged);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDeadStatus); \
	DECLARE_FUNCTION(execGetCharacterPullRadius); \
	DECLARE_FUNCTION(execSetTokens); \
	DECLARE_FUNCTION(execIncreasePullRadius); \
	DECLARE_FUNCTION(execAddBouncyProjectiles); \
	DECLARE_FUNCTION(execAddDashing); \
	DECLARE_FUNCTION(execIncreaseHealth); \
	DECLARE_FUNCTION(execAddShield); \
	DECLARE_FUNCTION(execIncreaseProjectileRate); \
	DECLARE_FUNCTION(execIncreaseCharacterSpeed); \
	DECLARE_FUNCTION(execGetGameScore);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rouge"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainCharacter(AMainCharacter&&); \
	AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_22_PROLOG
#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROUGE_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
