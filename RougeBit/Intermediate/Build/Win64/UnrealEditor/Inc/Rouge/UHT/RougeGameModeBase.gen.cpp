// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rouge/RougeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRougeGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ROUGE_API UClass* Z_Construct_UClass_ARougeGameModeBase();
ROUGE_API UClass* Z_Construct_UClass_ARougeGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rouge();
// End Cross Module References

// Begin Class ARougeGameModeBase
void ARougeGameModeBase::StaticRegisterNativesARougeGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARougeGameModeBase);
UClass* Z_Construct_UClass_ARougeGameModeBase_NoRegister()
{
	return ARougeGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ARougeGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RougeGameModeBase.h" },
		{ "ModuleRelativePath", "RougeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARougeGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARougeGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Rouge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARougeGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARougeGameModeBase_Statics::ClassParams = {
	&ARougeGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARougeGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARougeGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARougeGameModeBase()
{
	if (!Z_Registration_Info_UClass_ARougeGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARougeGameModeBase.OuterSingleton, Z_Construct_UClass_ARougeGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARougeGameModeBase.OuterSingleton;
}
template<> ROUGE_API UClass* StaticClass<ARougeGameModeBase>()
{
	return ARougeGameModeBase::StaticClass();
}
ARougeGameModeBase::ARougeGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARougeGameModeBase);
ARougeGameModeBase::~ARougeGameModeBase() {}
// End Class ARougeGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_RougeGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARougeGameModeBase, ARougeGameModeBase::StaticClass, TEXT("ARougeGameModeBase"), &Z_Registration_Info_UClass_ARougeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARougeGameModeBase), 2346465710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_RougeGameModeBase_h_83080831(TEXT("/Script/Rouge"),
	Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_RougeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_RougeGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
