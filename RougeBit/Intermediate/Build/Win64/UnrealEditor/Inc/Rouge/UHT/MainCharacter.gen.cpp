// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rouge/MainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ROUGE_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
ROUGE_API UClass* Z_Construct_UClass_AMainCharacter();
ROUGE_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
ROUGE_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
ROUGE_API UFunction* Z_Construct_UDelegateFunction_Rouge_OnDeath__DelegateSignature();
ROUGE_API UFunction* Z_Construct_UDelegateFunction_Rouge_OnGameScoreChange__DelegateSignature();
ROUGE_API UFunction* Z_Construct_UDelegateFunction_Rouge_OnHealthDecrease__DelegateSignature();
ROUGE_API UFunction* Z_Construct_UDelegateFunction_Rouge_OnHealthIncrease__DelegateSignature();
ROUGE_API UFunction* Z_Construct_UDelegateFunction_Rouge_OnMaxHealthIncrease__DelegateSignature();
ROUGE_API UFunction* Z_Construct_UDelegateFunction_Rouge_OnPullRadiusChanged__DelegateSignature();
ROUGE_API UFunction* Z_Construct_UDelegateFunction_Rouge_OnShieldDamaged__DelegateSignature();
ROUGE_API UFunction* Z_Construct_UDelegateFunction_Rouge_OnShieldStateChange__DelegateSignature();
ROUGE_API UFunction* Z_Construct_UDelegateFunction_Rouge_OnShoot__DelegateSignature();
ROUGE_API UFunction* Z_Construct_UDelegateFunction_Rouge_OnUpgradePending__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Rouge();
// End Cross Module References

// Begin Delegate FOnMaxHealthIncrease
struct Z_Construct_UDelegateFunction_Rouge_OnMaxHealthIncrease__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rouge_OnMaxHealthIncrease__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rouge, nullptr, "OnMaxHealthIncrease__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rouge_OnMaxHealthIncrease__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Rouge_OnMaxHealthIncrease__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Rouge_OnMaxHealthIncrease__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rouge_OnMaxHealthIncrease__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMaxHealthIncrease_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthIncrease)
{
	OnMaxHealthIncrease.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMaxHealthIncrease

// Begin Delegate FOnHealthDecrease
struct Z_Construct_UDelegateFunction_Rouge_OnHealthDecrease__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rouge_OnHealthDecrease__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rouge, nullptr, "OnHealthDecrease__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rouge_OnHealthDecrease__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Rouge_OnHealthDecrease__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Rouge_OnHealthDecrease__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rouge_OnHealthDecrease__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthDecrease_DelegateWrapper(const FMulticastScriptDelegate& OnHealthDecrease)
{
	OnHealthDecrease.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHealthDecrease

// Begin Delegate FOnHealthIncrease
struct Z_Construct_UDelegateFunction_Rouge_OnHealthIncrease__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rouge_OnHealthIncrease__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rouge, nullptr, "OnHealthIncrease__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rouge_OnHealthIncrease__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Rouge_OnHealthIncrease__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Rouge_OnHealthIncrease__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rouge_OnHealthIncrease__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthIncrease_DelegateWrapper(const FMulticastScriptDelegate& OnHealthIncrease)
{
	OnHealthIncrease.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHealthIncrease

// Begin Delegate FOnGameScoreChange
struct Z_Construct_UDelegateFunction_Rouge_OnGameScoreChange__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rouge_OnGameScoreChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rouge, nullptr, "OnGameScoreChange__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rouge_OnGameScoreChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Rouge_OnGameScoreChange__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Rouge_OnGameScoreChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rouge_OnGameScoreChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameScoreChange_DelegateWrapper(const FMulticastScriptDelegate& OnGameScoreChange)
{
	OnGameScoreChange.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGameScoreChange

// Begin Delegate FOnShieldStateChange
struct Z_Construct_UDelegateFunction_Rouge_OnShieldStateChange__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rouge_OnShieldStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rouge, nullptr, "OnShieldStateChange__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rouge_OnShieldStateChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Rouge_OnShieldStateChange__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Rouge_OnShieldStateChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rouge_OnShieldStateChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnShieldStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnShieldStateChange)
{
	OnShieldStateChange.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnShieldStateChange

// Begin Delegate FOnShieldDamaged
struct Z_Construct_UDelegateFunction_Rouge_OnShieldDamaged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rouge_OnShieldDamaged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rouge, nullptr, "OnShieldDamaged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rouge_OnShieldDamaged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Rouge_OnShieldDamaged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Rouge_OnShieldDamaged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rouge_OnShieldDamaged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnShieldDamaged_DelegateWrapper(const FMulticastScriptDelegate& OnShieldDamaged)
{
	OnShieldDamaged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnShieldDamaged

// Begin Delegate FOnDeath
struct Z_Construct_UDelegateFunction_Rouge_OnDeath__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rouge_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rouge, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rouge_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Rouge_OnDeath__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Rouge_OnDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rouge_OnDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath)
{
	OnDeath.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDeath

// Begin Delegate FOnUpgradePending
struct Z_Construct_UDelegateFunction_Rouge_OnUpgradePending__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rouge_OnUpgradePending__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rouge, nullptr, "OnUpgradePending__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rouge_OnUpgradePending__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Rouge_OnUpgradePending__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Rouge_OnUpgradePending__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rouge_OnUpgradePending__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUpgradePending_DelegateWrapper(const FMulticastScriptDelegate& OnUpgradePending)
{
	OnUpgradePending.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnUpgradePending

// Begin Delegate FOnShoot
struct Z_Construct_UDelegateFunction_Rouge_OnShoot__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rouge_OnShoot__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rouge, nullptr, "OnShoot__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rouge_OnShoot__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Rouge_OnShoot__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Rouge_OnShoot__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rouge_OnShoot__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnShoot_DelegateWrapper(const FMulticastScriptDelegate& OnShoot)
{
	OnShoot.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnShoot

// Begin Delegate FOnPullRadiusChanged
struct Z_Construct_UDelegateFunction_Rouge_OnPullRadiusChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rouge_OnPullRadiusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rouge, nullptr, "OnPullRadiusChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rouge_OnPullRadiusChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Rouge_OnPullRadiusChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Rouge_OnPullRadiusChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rouge_OnPullRadiusChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPullRadiusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPullRadiusChanged)
{
	OnPullRadiusChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPullRadiusChanged

// Begin Class AMainCharacter Function AddBouncyProjectiles
struct Z_Construct_UFunction_AMainCharacter_AddBouncyProjectiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_AddBouncyProjectiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "AddBouncyProjectiles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_AddBouncyProjectiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_AddBouncyProjectiles_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_AddBouncyProjectiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_AddBouncyProjectiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execAddBouncyProjectiles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBouncyProjectiles();
	P_NATIVE_END;
}
// End Class AMainCharacter Function AddBouncyProjectiles

// Begin Class AMainCharacter Function AddDashing
struct Z_Construct_UFunction_AMainCharacter_AddDashing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_AddDashing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "AddDashing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_AddDashing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_AddDashing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_AddDashing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_AddDashing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execAddDashing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDashing();
	P_NATIVE_END;
}
// End Class AMainCharacter Function AddDashing

// Begin Class AMainCharacter Function AddShield
struct Z_Construct_UFunction_AMainCharacter_AddShield_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_AddShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "AddShield", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_AddShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_AddShield_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_AddShield()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_AddShield_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execAddShield)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddShield();
	P_NATIVE_END;
}
// End Class AMainCharacter Function AddShield

// Begin Class AMainCharacter Function GetCharacterPullRadius
struct Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics
{
	struct MainCharacter_eventGetCharacterPullRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventGetCharacterPullRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "GetCharacterPullRadius", nullptr, nullptr, Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::MainCharacter_eventGetCharacterPullRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::MainCharacter_eventGetCharacterPullRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execGetCharacterPullRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCharacterPullRadius();
	P_NATIVE_END;
}
// End Class AMainCharacter Function GetCharacterPullRadius

// Begin Class AMainCharacter Function GetDeadStatus
struct Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics
{
	struct MainCharacter_eventGetDeadStatus_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MainCharacter_eventGetDeadStatus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainCharacter_eventGetDeadStatus_Parms), &Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "GetDeadStatus", nullptr, nullptr, Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::MainCharacter_eventGetDeadStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::MainCharacter_eventGetDeadStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacter_GetDeadStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_GetDeadStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execGetDeadStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDeadStatus();
	P_NATIVE_END;
}
// End Class AMainCharacter Function GetDeadStatus

// Begin Class AMainCharacter Function GetGameScore
struct Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics
{
	struct MainCharacter_eventGetGameScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the GameScore.\n" },
#endif
		{ "ModuleRelativePath", "MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the GameScore." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventGetGameScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "GetGameScore", nullptr, nullptr, Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::MainCharacter_eventGetGameScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::MainCharacter_eventGetGameScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacter_GetGameScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_GetGameScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execGetGameScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGameScore();
	P_NATIVE_END;
}
// End Class AMainCharacter Function GetGameScore

// Begin Class AMainCharacter Function IncreaseCharacterSpeed
struct Z_Construct_UFunction_AMainCharacter_IncreaseCharacterSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Below are the functions for handling upgrades\n" },
#endif
		{ "ModuleRelativePath", "MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Below are the functions for handling upgrades" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_IncreaseCharacterSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "IncreaseCharacterSpeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_IncreaseCharacterSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_IncreaseCharacterSpeed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_IncreaseCharacterSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_IncreaseCharacterSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execIncreaseCharacterSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseCharacterSpeed();
	P_NATIVE_END;
}
// End Class AMainCharacter Function IncreaseCharacterSpeed

// Begin Class AMainCharacter Function IncreaseHealth
struct Z_Construct_UFunction_AMainCharacter_IncreaseHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_IncreaseHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "IncreaseHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_IncreaseHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_IncreaseHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_IncreaseHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_IncreaseHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execIncreaseHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseHealth();
	P_NATIVE_END;
}
// End Class AMainCharacter Function IncreaseHealth

// Begin Class AMainCharacter Function IncreaseProjectileRate
struct Z_Construct_UFunction_AMainCharacter_IncreaseProjectileRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_IncreaseProjectileRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "IncreaseProjectileRate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_IncreaseProjectileRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_IncreaseProjectileRate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_IncreaseProjectileRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_IncreaseProjectileRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execIncreaseProjectileRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseProjectileRate();
	P_NATIVE_END;
}
// End Class AMainCharacter Function IncreaseProjectileRate

// Begin Class AMainCharacter Function IncreasePullRadius
struct Z_Construct_UFunction_AMainCharacter_IncreasePullRadius_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_IncreasePullRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "IncreasePullRadius", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_IncreasePullRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_IncreasePullRadius_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_IncreasePullRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_IncreasePullRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execIncreasePullRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreasePullRadius();
	P_NATIVE_END;
}
// End Class AMainCharacter Function IncreasePullRadius

// Begin Class AMainCharacter Function SetTokens
struct Z_Construct_UFunction_AMainCharacter_SetTokens_Statics
{
	struct MainCharacter_eventSetTokens_Parms
	{
		int32 val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventSetTokens_Parms, val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "SetTokens", nullptr, nullptr, Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::MainCharacter_eventSetTokens_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::MainCharacter_eventSetTokens_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacter_SetTokens()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_SetTokens_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execSetTokens)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTokens(Z_Param_val);
	P_NATIVE_END;
}
// End Class AMainCharacter Function SetTokens

// Begin Class AMainCharacter
void AMainCharacter::StaticRegisterNativesAMainCharacter()
{
	UClass* Class = AMainCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBouncyProjectiles", &AMainCharacter::execAddBouncyProjectiles },
		{ "AddDashing", &AMainCharacter::execAddDashing },
		{ "AddShield", &AMainCharacter::execAddShield },
		{ "GetCharacterPullRadius", &AMainCharacter::execGetCharacterPullRadius },
		{ "GetDeadStatus", &AMainCharacter::execGetDeadStatus },
		{ "GetGameScore", &AMainCharacter::execGetGameScore },
		{ "IncreaseCharacterSpeed", &AMainCharacter::execIncreaseCharacterSpeed },
		{ "IncreaseHealth", &AMainCharacter::execIncreaseHealth },
		{ "IncreaseProjectileRate", &AMainCharacter::execIncreaseProjectileRate },
		{ "IncreasePullRadius", &AMainCharacter::execIncreasePullRadius },
		{ "SetTokens", &AMainCharacter::execSetTokens },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter);
UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
{
	return AMainCharacter::StaticClass();
}
struct Z_Construct_UClass_AMainCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCharacter.h" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onMaxHealthIncrease_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onShoot_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onHealthDecrease_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onHealthIncrease_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onGameScoreChange_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onShieldStateChange_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onShieldDamaged_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onDeath_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onUpgradePending_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleToMouse_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Angle Between Mouse and the Character\n" },
#endif
		{ "ModuleRelativePath", "MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Angle Between Mouse and the Character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleToMouseYaw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Yaw Angle Between Mouse and the Character\n" },
#endif
		{ "ModuleRelativePath", "MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Yaw Angle Between Mouse and the Character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh of the Crosshair for Mouse\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh of the Crosshair for Mouse" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunProjectile_MetaData[] = {
		{ "Category", "MainCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class for gun\n" },
#endif
		{ "ModuleRelativePath", "MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class for gun" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BouncyGunProjectile_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health of the Main Character\n" },
#endif
		{ "ModuleRelativePath", "MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health of the Main Character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnerReference_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemySpawnerReferences" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterFireRateLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Upgrade Levels For Actions\n" },
#endif
		{ "ModuleRelativePath", "MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Upgrade Levels For Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSpeedLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanCharacterDash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBouncyProjectiles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterShieldLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterHealthLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDirectionalShootingLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPullRadiusLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharacterPullRadiusLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharacterFireRateLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharacterSpeedLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharacterShieldLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharacterHealthLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextLevelScore_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widget Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextLevelIncrement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widget Attributes" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tokens_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Tokens" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitFlashCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPPDeathCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPPCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onPullRadiusChanged_MetaData[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onMaxHealthIncrease;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onShoot;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onHealthDecrease;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onHealthIncrease;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onGameScoreChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onShieldStateChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onShieldDamaged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onDeath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onUpgradePending;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrbSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngleToMouse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngleToMouseYaw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GunProjectile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BouncyGunProjectile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeath;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnemySpawnerReference;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterFireRateLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterSpeedLevel;
	static void NewProp_bCanCharacterDash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCharacterDash;
	static void NewProp_bBouncyProjectiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBouncyProjectiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterShieldLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterHealthLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterDirectionalShootingLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterPullRadiusLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCharacterPullRadiusLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCharacterFireRateLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCharacterSpeedLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCharacterShieldLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCharacterHealthLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextLevelScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextLevelIncrement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Tokens;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitFlashCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraPPDeathCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraPPCurve;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onPullRadiusChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_AddBouncyProjectiles, "AddBouncyProjectiles" }, // 3636462490
		{ &Z_Construct_UFunction_AMainCharacter_AddDashing, "AddDashing" }, // 964539628
		{ &Z_Construct_UFunction_AMainCharacter_AddShield, "AddShield" }, // 1155019927
		{ &Z_Construct_UFunction_AMainCharacter_GetCharacterPullRadius, "GetCharacterPullRadius" }, // 278211989
		{ &Z_Construct_UFunction_AMainCharacter_GetDeadStatus, "GetDeadStatus" }, // 2355327374
		{ &Z_Construct_UFunction_AMainCharacter_GetGameScore, "GetGameScore" }, // 3895196788
		{ &Z_Construct_UFunction_AMainCharacter_IncreaseCharacterSpeed, "IncreaseCharacterSpeed" }, // 2717807764
		{ &Z_Construct_UFunction_AMainCharacter_IncreaseHealth, "IncreaseHealth" }, // 2665240419
		{ &Z_Construct_UFunction_AMainCharacter_IncreaseProjectileRate, "IncreaseProjectileRate" }, // 3139417545
		{ &Z_Construct_UFunction_AMainCharacter_IncreasePullRadius, "IncreasePullRadius" }, // 1338963957
		{ &Z_Construct_UFunction_AMainCharacter_SetTokens, "SetTokens" }, // 1414425187
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_onMaxHealthIncrease = { "onMaxHealthIncrease", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, onMaxHealthIncrease), Z_Construct_UDelegateFunction_Rouge_OnMaxHealthIncrease__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onMaxHealthIncrease_MetaData), NewProp_onMaxHealthIncrease_MetaData) }; // 3410820505
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_onShoot = { "onShoot", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, onShoot), Z_Construct_UDelegateFunction_Rouge_OnShoot__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onShoot_MetaData), NewProp_onShoot_MetaData) }; // 3067269593
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_onHealthDecrease = { "onHealthDecrease", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, onHealthDecrease), Z_Construct_UDelegateFunction_Rouge_OnHealthDecrease__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onHealthDecrease_MetaData), NewProp_onHealthDecrease_MetaData) }; // 2987034313
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_onHealthIncrease = { "onHealthIncrease", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, onHealthIncrease), Z_Construct_UDelegateFunction_Rouge_OnHealthIncrease__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onHealthIncrease_MetaData), NewProp_onHealthIncrease_MetaData) }; // 773239469
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_onGameScoreChange = { "onGameScoreChange", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, onGameScoreChange), Z_Construct_UDelegateFunction_Rouge_OnGameScoreChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onGameScoreChange_MetaData), NewProp_onGameScoreChange_MetaData) }; // 1518603372
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_onShieldStateChange = { "onShieldStateChange", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, onShieldStateChange), Z_Construct_UDelegateFunction_Rouge_OnShieldStateChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onShieldStateChange_MetaData), NewProp_onShieldStateChange_MetaData) }; // 3686887546
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_onShieldDamaged = { "onShieldDamaged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, onShieldDamaged), Z_Construct_UDelegateFunction_Rouge_OnShieldDamaged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onShieldDamaged_MetaData), NewProp_onShieldDamaged_MetaData) }; // 3665095721
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_onDeath = { "onDeath", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, onDeath), Z_Construct_UDelegateFunction_Rouge_OnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onDeath_MetaData), NewProp_onDeath_MetaData) }; // 3883274934
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_onUpgradePending = { "onUpgradePending", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, onUpgradePending), Z_Construct_UDelegateFunction_Rouge_OnUpgradePending__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onUpgradePending_MetaData), NewProp_onUpgradePending_MetaData) }; // 3772452731
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_OrbSound = { "OrbSound", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, OrbSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbSound_MetaData), NewProp_OrbSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_DamageSound = { "DamageSound", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, DamageSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageSound_MetaData), NewProp_DamageSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_DeathSound = { "DeathSound", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, DeathSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathSound_MetaData), NewProp_DeathSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_AngleToMouse = { "AngleToMouse", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, AngleToMouse), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleToMouse_MetaData), NewProp_AngleToMouse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_AngleToMouseYaw = { "AngleToMouseYaw", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, AngleToMouseYaw), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleToMouseYaw_MetaData), NewProp_AngleToMouseYaw_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CrosshairMesh = { "CrosshairMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CrosshairMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairMesh_MetaData), NewProp_CrosshairMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_GunProjectile = { "GunProjectile", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, GunProjectile), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunProjectile_MetaData), NewProp_GunProjectile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_BouncyGunProjectile = { "BouncyGunProjectile", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, BouncyGunProjectile), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BouncyGunProjectile_MetaData), NewProp_BouncyGunProjectile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxHeath = { "MaxHeath", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MaxHeath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeath_MetaData), NewProp_MaxHeath_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_EnemySpawnerReference = { "EnemySpawnerReference", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, EnemySpawnerReference), Z_Construct_UClass_AEnemySpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemySpawnerReference_MetaData), NewProp_EnemySpawnerReference_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterFireRateLevel = { "CharacterFireRateLevel", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CharacterFireRateLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterFireRateLevel_MetaData), NewProp_CharacterFireRateLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterSpeedLevel = { "CharacterSpeedLevel", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CharacterSpeedLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterSpeedLevel_MetaData), NewProp_CharacterSpeedLevel_MetaData) };
void Z_Construct_UClass_AMainCharacter_Statics::NewProp_bCanCharacterDash_SetBit(void* Obj)
{
	((AMainCharacter*)Obj)->bCanCharacterDash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_bCanCharacterDash = { "bCanCharacterDash", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainCharacter), &Z_Construct_UClass_AMainCharacter_Statics::NewProp_bCanCharacterDash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanCharacterDash_MetaData), NewProp_bCanCharacterDash_MetaData) };
void Z_Construct_UClass_AMainCharacter_Statics::NewProp_bBouncyProjectiles_SetBit(void* Obj)
{
	((AMainCharacter*)Obj)->bBouncyProjectiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_bBouncyProjectiles = { "bBouncyProjectiles", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainCharacter), &Z_Construct_UClass_AMainCharacter_Statics::NewProp_bBouncyProjectiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBouncyProjectiles_MetaData), NewProp_bBouncyProjectiles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterShieldLevel = { "CharacterShieldLevel", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CharacterShieldLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterShieldLevel_MetaData), NewProp_CharacterShieldLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterHealthLevel = { "CharacterHealthLevel", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CharacterHealthLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterHealthLevel_MetaData), NewProp_CharacterHealthLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterDirectionalShootingLevel = { "CharacterDirectionalShootingLevel", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CharacterDirectionalShootingLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDirectionalShootingLevel_MetaData), NewProp_CharacterDirectionalShootingLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterPullRadiusLevel = { "CharacterPullRadiusLevel", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CharacterPullRadiusLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPullRadiusLevel_MetaData), NewProp_CharacterPullRadiusLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxCharacterPullRadiusLevel = { "MaxCharacterPullRadiusLevel", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MaxCharacterPullRadiusLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharacterPullRadiusLevel_MetaData), NewProp_MaxCharacterPullRadiusLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxCharacterFireRateLevel = { "MaxCharacterFireRateLevel", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MaxCharacterFireRateLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharacterFireRateLevel_MetaData), NewProp_MaxCharacterFireRateLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxCharacterSpeedLevel = { "MaxCharacterSpeedLevel", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MaxCharacterSpeedLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharacterSpeedLevel_MetaData), NewProp_MaxCharacterSpeedLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxCharacterShieldLevel = { "MaxCharacterShieldLevel", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MaxCharacterShieldLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharacterShieldLevel_MetaData), NewProp_MaxCharacterShieldLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxCharacterHealthLevel = { "MaxCharacterHealthLevel", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MaxCharacterHealthLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharacterHealthLevel_MetaData), NewProp_MaxCharacterHealthLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_NextLevelScore = { "NextLevelScore", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, NextLevelScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextLevelScore_MetaData), NewProp_NextLevelScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_NextLevelIncrement = { "NextLevelIncrement", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, NextLevelIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextLevelIncrement_MetaData), NewProp_NextLevelIncrement_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Tokens = { "Tokens", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Tokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tokens_MetaData), NewProp_Tokens_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_HitFlashCurve = { "HitFlashCurve", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, HitFlashCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitFlashCurve_MetaData), NewProp_HitFlashCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraPPDeathCurve = { "CameraPPDeathCurve", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CameraPPDeathCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPPDeathCurve_MetaData), NewProp_CameraPPDeathCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraPPCurve = { "CameraPPCurve", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CameraPPCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPPCurve_MetaData), NewProp_CameraPPCurve_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_onPullRadiusChanged = { "onPullRadiusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, onPullRadiusChanged), Z_Construct_UDelegateFunction_Rouge_OnPullRadiusChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onPullRadiusChanged_MetaData), NewProp_onPullRadiusChanged_MetaData) }; // 1469039620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_onMaxHealthIncrease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_onShoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_onHealthDecrease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_onHealthIncrease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_onGameScoreChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_onShieldStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_onShieldDamaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_onDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_onUpgradePending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_OrbSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_DamageSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_DeathSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_AngleToMouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_AngleToMouseYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CrosshairMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_GunProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_BouncyGunProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxHeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_EnemySpawnerReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterFireRateLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterSpeedLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_bCanCharacterDash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_bBouncyProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterShieldLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterHealthLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterDirectionalShootingLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CharacterPullRadiusLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxCharacterPullRadiusLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxCharacterFireRateLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxCharacterSpeedLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxCharacterShieldLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxCharacterHealthLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_NextLevelScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_NextLevelIncrement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Tokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_HitFlashCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraPPDeathCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraPPCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_onPullRadiusChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Rouge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
	&AMainCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCharacter()
{
	if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
}
template<> ROUGE_API UClass* StaticClass<AMainCharacter>()
{
	return AMainCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
AMainCharacter::~AMainCharacter() {}
// End Class AMainCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 2990890752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_1518234923(TEXT("/Script/Rouge"),
	Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
