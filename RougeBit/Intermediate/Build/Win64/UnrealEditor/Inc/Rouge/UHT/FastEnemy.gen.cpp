// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rouge/FastEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastEnemy() {}

// Begin Cross Module References
ROUGE_API UClass* Z_Construct_UClass_AEnemy();
ROUGE_API UClass* Z_Construct_UClass_AFastEnemy();
ROUGE_API UClass* Z_Construct_UClass_AFastEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rouge();
// End Cross Module References

// Begin Class AFastEnemy
void AFastEnemy::StaticRegisterNativesAFastEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFastEnemy);
UClass* Z_Construct_UClass_AFastEnemy_NoRegister()
{
	return AFastEnemy::StaticClass();
}
struct Z_Construct_UClass_AFastEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FastEnemy.h" },
		{ "ModuleRelativePath", "FastEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFastEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFastEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_Rouge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFastEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFastEnemy_Statics::ClassParams = {
	&AFastEnemy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AFastEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFastEnemy()
{
	if (!Z_Registration_Info_UClass_AFastEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFastEnemy.OuterSingleton, Z_Construct_UClass_AFastEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFastEnemy.OuterSingleton;
}
template<> ROUGE_API UClass* StaticClass<AFastEnemy>()
{
	return AFastEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFastEnemy);
AFastEnemy::~AFastEnemy() {}
// End Class AFastEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_FastEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFastEnemy, AFastEnemy::StaticClass, TEXT("AFastEnemy"), &Z_Registration_Info_UClass_AFastEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFastEnemy), 2097648276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_FastEnemy_h_747538835(TEXT("/Script/Rouge"),
	Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_FastEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_FastEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
