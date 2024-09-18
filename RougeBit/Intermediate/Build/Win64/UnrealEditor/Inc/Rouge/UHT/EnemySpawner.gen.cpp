// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rouge/EnemySpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ROUGE_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
ROUGE_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
ROUGE_API UClass* Z_Construct_UClass_AEnemySpawner();
ROUGE_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
ROUGE_API UClass* Z_Construct_UClass_AFastEnemy_NoRegister();
ROUGE_API UClass* Z_Construct_UClass_AHeavyEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rouge();
// End Cross Module References

// Begin Class AEnemySpawner
void AEnemySpawner::StaticRegisterNativesAEnemySpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpawner);
UClass* Z_Construct_UClass_AEnemySpawner_NoRegister()
{
	return AEnemySpawner::StaticClass();
}
struct Z_Construct_UClass_AEnemySpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawner.h" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseEnemy_MetaData[] = {
		{ "Category", "EnemySpawner" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastEnemy_MetaData[] = {
		{ "Category", "EnemySpawner" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyEnemy_MetaData[] = {
		{ "Category", "EnemySpawner" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocations_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemiesOnLevel_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BaseEnemy;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FastEnemy;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HeavyEnemy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnLocations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemiesOnLevel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemiesOnLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_BaseEnemy = { "BaseEnemy", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, BaseEnemy), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseEnemy_MetaData), NewProp_BaseEnemy_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_FastEnemy = { "FastEnemy", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, FastEnemy), Z_Construct_UClass_UClass, Z_Construct_UClass_AFastEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastEnemy_MetaData), NewProp_FastEnemy_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_HeavyEnemy = { "HeavyEnemy", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, HeavyEnemy), Z_Construct_UClass_UClass, Z_Construct_UClass_AHeavyEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyEnemy_MetaData), NewProp_HeavyEnemy_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnLocations_Inner = { "SpawnLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnLocations = { "SpawnLocations", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, SpawnLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocations_MetaData), NewProp_SpawnLocations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemiesOnLevel_Inner = { "EnemiesOnLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemiesOnLevel = { "EnemiesOnLevel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, EnemiesOnLevel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemiesOnLevel_MetaData), NewProp_EnemiesOnLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_BaseEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_FastEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_HeavyEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemiesOnLevel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_EnemiesOnLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Rouge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawner_Statics::ClassParams = {
	&AEnemySpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemySpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemySpawner()
{
	if (!Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton, Z_Construct_UClass_AEnemySpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton;
}
template<> ROUGE_API UClass* StaticClass<AEnemySpawner>()
{
	return AEnemySpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawner);
AEnemySpawner::~AEnemySpawner() {}
// End Class AEnemySpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_EnemySpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawner, AEnemySpawner::StaticClass, TEXT("AEnemySpawner"), &Z_Registration_Info_UClass_AEnemySpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawner), 1991288991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_EnemySpawner_h_1704456861(TEXT("/Script/Rouge"),
	Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_EnemySpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_EnemySpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
