// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rouge/MainCharacterAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacterAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ROUGE_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
ROUGE_API UClass* Z_Construct_UClass_UMainCharacterAnimInstance();
ROUGE_API UClass* Z_Construct_UClass_UMainCharacterAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rouge();
// End Cross Module References

// Begin Class UMainCharacterAnimInstance Function UpdateAnimationProperties
struct Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics
{
	struct MainCharacterAnimInstance_eventUpdateAnimationProperties_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacterAnimInstance_eventUpdateAnimationProperties_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainCharacterAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::MainCharacterAnimInstance_eventUpdateAnimationProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::MainCharacterAnimInstance_eventUpdateAnimationProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainCharacterAnimInstance::execUpdateAnimationProperties)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAnimationProperties(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UMainCharacterAnimInstance Function UpdateAnimationProperties

// Begin Class UMainCharacterAnimInstance
void UMainCharacterAnimInstance::StaticRegisterNativesUMainCharacterAnimInstance()
{
	UClass* Class = UMainCharacterAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateAnimationProperties", &UMainCharacterAnimInstance::execUpdateAnimationProperties },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainCharacterAnimInstance);
UClass* Z_Construct_UClass_UMainCharacterAnimInstance_NoRegister()
{
	return UMainCharacterAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UMainCharacterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MainCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "MainCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainCharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainCharacterAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 658631713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainCharacterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAnimInstance, MainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCharacter_MetaData), NewProp_MainCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_MainCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAnimInstance_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainCharacterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Rouge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainCharacterAnimInstance_Statics::ClassParams = {
	&UMainCharacterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainCharacterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainCharacterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMainCharacterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UMainCharacterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainCharacterAnimInstance.OuterSingleton;
}
template<> ROUGE_API UClass* StaticClass<UMainCharacterAnimInstance>()
{
	return UMainCharacterAnimInstance::StaticClass();
}
UMainCharacterAnimInstance::UMainCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainCharacterAnimInstance);
UMainCharacterAnimInstance::~UMainCharacterAnimInstance() {}
// End Class UMainCharacterAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainCharacterAnimInstance, UMainCharacterAnimInstance::StaticClass, TEXT("UMainCharacterAnimInstance"), &Z_Registration_Info_UClass_UMainCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainCharacterAnimInstance), 2901251815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_2164427582(TEXT("/Script/Rouge"),
	Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MainCharacterAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
