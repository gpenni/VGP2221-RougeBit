// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rouge/HeavyEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeavyEnemy() {}

// Begin Cross Module References
ROUGE_API UClass* Z_Construct_UClass_AEnemy();
ROUGE_API UClass* Z_Construct_UClass_AHeavyEnemy();
ROUGE_API UClass* Z_Construct_UClass_AHeavyEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rouge();
// End Cross Module References

// Begin Class AHeavyEnemy
void AHeavyEnemy::StaticRegisterNativesAHeavyEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeavyEnemy);
UClass* Z_Construct_UClass_AHeavyEnemy_NoRegister()
{
	return AHeavyEnemy::StaticClass();
}
struct Z_Construct_UClass_AHeavyEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HeavyEnemy.h" },
		{ "ModuleRelativePath", "HeavyEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeavyEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHeavyEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_Rouge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeavyEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeavyEnemy_Statics::ClassParams = {
	&AHeavyEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeavyEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeavyEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeavyEnemy()
{
	if (!Z_Registration_Info_UClass_AHeavyEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeavyEnemy.OuterSingleton, Z_Construct_UClass_AHeavyEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeavyEnemy.OuterSingleton;
}
template<> ROUGE_API UClass* StaticClass<AHeavyEnemy>()
{
	return AHeavyEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeavyEnemy);
AHeavyEnemy::~AHeavyEnemy() {}
// End Class AHeavyEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_HeavyEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeavyEnemy, AHeavyEnemy::StaticClass, TEXT("AHeavyEnemy"), &Z_Registration_Info_UClass_AHeavyEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeavyEnemy), 842415471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_HeavyEnemy_h_3482608041(TEXT("/Script/Rouge"),
	Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_HeavyEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_HeavyEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
