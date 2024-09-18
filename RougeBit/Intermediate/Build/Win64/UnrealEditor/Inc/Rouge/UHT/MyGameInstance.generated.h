// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROUGE_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define ROUGE_MyGameInstance_generated_h

#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGameLoaded); \
	DECLARE_FUNCTION(execGetGameLoaded); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execSetHighScore); \
	DECLARE_FUNCTION(execGetHighScore);


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Rouge"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyGameInstance(UMyGameInstance&&); \
	UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyGameInstance) \
	NO_API virtual ~UMyGameInstance();


#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_9_PROLOG
#define FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROUGE_API UClass* StaticClass<class UMyGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
