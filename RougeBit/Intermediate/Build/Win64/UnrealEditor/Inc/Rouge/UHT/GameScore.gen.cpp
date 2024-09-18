// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rouge/GameScore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameScore() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ROUGE_API UClass* Z_Construct_UClass_AGameScore();
ROUGE_API UClass* Z_Construct_UClass_AGameScore_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rouge();
// End Cross Module References

// Begin Class AGameScore
void AGameScore::StaticRegisterNativesAGameScore()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameScore);
UClass* Z_Construct_UClass_AGameScore_NoRegister()
{
	return AGameScore::StaticClass();
}
struct Z_Construct_UClass_AGameScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameScore.h" },
		{ "ModuleRelativePath", "GameScore.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Rouge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameScore_Statics::ClassParams = {
	&AGameScore::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameScore_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameScore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameScore()
{
	if (!Z_Registration_Info_UClass_AGameScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameScore.OuterSingleton, Z_Construct_UClass_AGameScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameScore.OuterSingleton;
}
template<> ROUGE_API UClass* StaticClass<AGameScore>()
{
	return AGameScore::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameScore);
AGameScore::~AGameScore() {}
// End Class AGameScore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_GameScore_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameScore, AGameScore::StaticClass, TEXT("AGameScore"), &Z_Registration_Info_UClass_AGameScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameScore), 3461485466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_GameScore_h_1506240495(TEXT("/Script/Rouge"),
	Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_GameScore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_GameScore_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
