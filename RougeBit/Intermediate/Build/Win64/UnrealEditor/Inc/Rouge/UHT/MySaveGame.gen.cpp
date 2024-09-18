// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rouge/MySaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
ROUGE_API UClass* Z_Construct_UClass_UMySaveGame();
ROUGE_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rouge();
// End Cross Module References

// Begin Class UMySaveGame
void UMySaveGame::StaticRegisterNativesUMySaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySaveGame);
UClass* Z_Construct_UClass_UMySaveGame_NoRegister()
{
	return UMySaveGame::StaticClass();
}
struct Z_Construct_UClass_UMySaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MySaveGame.h" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGameFirstLoaded_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HighScore;
	static void NewProp_bGameFirstLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameFirstLoaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMySaveGame, HighScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighScore_MetaData), NewProp_HighScore_MetaData) };
void Z_Construct_UClass_UMySaveGame_Statics::NewProp_bGameFirstLoaded_SetBit(void* Obj)
{
	((UMySaveGame*)Obj)->bGameFirstLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_bGameFirstLoaded = { "bGameFirstLoaded", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMySaveGame), &Z_Construct_UClass_UMySaveGame_Statics::NewProp_bGameFirstLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGameFirstLoaded_MetaData), NewProp_bGameFirstLoaded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMySaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_HighScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_bGameFirstLoaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMySaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_Rouge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySaveGame_Statics::ClassParams = {
	&UMySaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMySaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMySaveGame()
{
	if (!Z_Registration_Info_UClass_UMySaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySaveGame.OuterSingleton, Z_Construct_UClass_UMySaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMySaveGame.OuterSingleton;
}
template<> ROUGE_API UClass* StaticClass<UMySaveGame>()
{
	return UMySaveGame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMySaveGame);
UMySaveGame::~UMySaveGame() {}
// End Class UMySaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MySaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMySaveGame, UMySaveGame::StaticClass, TEXT("UMySaveGame"), &Z_Registration_Info_UClass_UMySaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySaveGame), 813768132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MySaveGame_h_1817880761(TEXT("/Script/Rouge"),
	Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MySaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MySaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
