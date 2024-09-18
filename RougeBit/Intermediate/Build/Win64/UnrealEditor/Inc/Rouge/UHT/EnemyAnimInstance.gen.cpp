// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rouge/EnemyAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ROUGE_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
ROUGE_API UClass* Z_Construct_UClass_UEnemyAnimInstance();
ROUGE_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rouge();
// End Cross Module References

// Begin Class UEnemyAnimInstance Function UpdateAnimationProperties
struct Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics
{
	struct EnemyAnimInstance_eventUpdateAnimationProperties_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyAnimInstance_eventUpdateAnimationProperties_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::EnemyAnimInstance_eventUpdateAnimationProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::EnemyAnimInstance_eventUpdateAnimationProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyAnimInstance::execUpdateAnimationProperties)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAnimationProperties(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UEnemyAnimInstance Function UpdateAnimationProperties

// Begin Class UEnemyAnimInstance
void UEnemyAnimInstance::StaticRegisterNativesUEnemyAnimInstance()
{
	UClass* Class = UEnemyAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateAnimationProperties", &UEnemyAnimInstance::execUpdateAnimationProperties },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyAnimInstance);
UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister()
{
	return UEnemyAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UEnemyAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EnemyAnimInstance.h" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 1885604373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnimInstance, Enemy), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemy_MetaData), NewProp_Enemy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Rouge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams = {
	&UEnemyAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyAnimInstance()
{
	if (!Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton, Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton;
}
template<> ROUGE_API UClass* StaticClass<UEnemyAnimInstance>()
{
	return UEnemyAnimInstance::StaticClass();
}
UEnemyAnimInstance::UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnimInstance);
UEnemyAnimInstance::~UEnemyAnimInstance() {}
// End Class UEnemyAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_EnemyAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyAnimInstance, UEnemyAnimInstance::StaticClass, TEXT("UEnemyAnimInstance"), &Z_Registration_Info_UClass_UEnemyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAnimInstance), 182558570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_EnemyAnimInstance_h_3747396052(TEXT("/Script/Rouge"),
	Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_EnemyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_EnemyAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
