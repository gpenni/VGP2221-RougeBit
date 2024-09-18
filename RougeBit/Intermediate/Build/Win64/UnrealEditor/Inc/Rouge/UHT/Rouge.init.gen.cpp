// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRouge_init() {}
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
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Rouge;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Rouge()
	{
		if (!Z_Registration_Info_UPackage__Script_Rouge.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Rouge_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Rouge_OnGameScoreChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Rouge_OnHealthDecrease__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Rouge_OnHealthIncrease__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Rouge_OnMaxHealthIncrease__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Rouge_OnPullRadiusChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Rouge_OnShieldDamaged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Rouge_OnShieldStateChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Rouge_OnShoot__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Rouge_OnUpgradePending__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Rouge",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB4AC8D5F,
				0x2EA211A5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Rouge.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Rouge.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Rouge(Z_Construct_UPackage__Script_Rouge, TEXT("/Script/Rouge"), Z_Registration_Info_UPackage__Script_Rouge, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB4AC8D5F, 0x2EA211A5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
