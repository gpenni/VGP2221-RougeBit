// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rouge/MyGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ROUGE_API UClass* Z_Construct_UClass_UMyGameInstance();
ROUGE_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rouge();
// End Cross Module References

// Begin Class UMyGameInstance Function GetGameLoaded
struct Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics
{
	struct MyGameInstance_eventGetGameLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyGameInstance_eventGetGameLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyGameInstance_eventGetGameLoaded_Parms), &Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "GetGameLoaded", nullptr, nullptr, Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::MyGameInstance_eventGetGameLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::MyGameInstance_eventGetGameLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_GetGameLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_GetGameLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execGetGameLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGameLoaded();
	P_NATIVE_END;
}
// End Class UMyGameInstance Function GetGameLoaded

// Begin Class UMyGameInstance Function GetHighScore
struct Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics
{
	struct MyGameInstance_eventGetHighScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HighScore" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventGetHighScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "GetHighScore", nullptr, nullptr, Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::MyGameInstance_eventGetHighScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::MyGameInstance_eventGetHighScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_GetHighScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_GetHighScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execGetHighScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHighScore();
	P_NATIVE_END;
}
// End Class UMyGameInstance Function GetHighScore

// Begin Class UMyGameInstance Function LoadGame
struct Z_Construct_UFunction_UMyGameInstance_LoadGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "LoadGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_LoadGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyGameInstance_LoadGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_LoadGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execLoadGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadGame();
	P_NATIVE_END;
}
// End Class UMyGameInstance Function LoadGame

// Begin Class UMyGameInstance Function SaveGame
struct Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyGameInstance_SaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGame();
	P_NATIVE_END;
}
// End Class UMyGameInstance Function SaveGame

// Begin Class UMyGameInstance Function SetGameLoaded
struct Z_Construct_UFunction_UMyGameInstance_SetGameLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SetGameLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SetGameLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetGameLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_SetGameLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyGameInstance_SetGameLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SetGameLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execSetGameLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameLoaded();
	P_NATIVE_END;
}
// End Class UMyGameInstance Function SetGameLoaded

// Begin Class UMyGameInstance Function SetHighScore
struct Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics
{
	struct MyGameInstance_eventSetHighScore_Parms
	{
		int32 NewHighScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HighScore" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHighScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::NewProp_NewHighScore = { "NewHighScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventSetHighScore_Parms, NewHighScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::NewProp_NewHighScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SetHighScore", nullptr, nullptr, Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::MyGameInstance_eventSetHighScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::MyGameInstance_eventSetHighScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_SetHighScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SetHighScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execSetHighScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewHighScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighScore(Z_Param_NewHighScore);
	P_NATIVE_END;
}
// End Class UMyGameInstance Function SetHighScore

// Begin Class UMyGameInstance
void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
{
	UClass* Class = UMyGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGameLoaded", &UMyGameInstance::execGetGameLoaded },
		{ "GetHighScore", &UMyGameInstance::execGetHighScore },
		{ "LoadGame", &UMyGameInstance::execLoadGame },
		{ "SaveGame", &UMyGameInstance::execSaveGame },
		{ "SetGameLoaded", &UMyGameInstance::execSetGameLoaded },
		{ "SetHighScore", &UMyGameInstance::execSetHighScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstance);
UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
{
	return UMyGameInstance::StaticClass();
}
struct Z_Construct_UClass_UMyGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_GetGameLoaded, "GetGameLoaded" }, // 1484402412
		{ &Z_Construct_UFunction_UMyGameInstance_GetHighScore, "GetHighScore" }, // 101817451
		{ &Z_Construct_UFunction_UMyGameInstance_LoadGame, "LoadGame" }, // 1493079067
		{ &Z_Construct_UFunction_UMyGameInstance_SaveGame, "SaveGame" }, // 973344934
		{ &Z_Construct_UFunction_UMyGameInstance_SetGameLoaded, "SetGameLoaded" }, // 2725374476
		{ &Z_Construct_UFunction_UMyGameInstance_SetHighScore, "SetHighScore" }, // 3185378670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Rouge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
	&UMyGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyGameInstance()
{
	if (!Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton;
}
template<> ROUGE_API UClass* StaticClass<UMyGameInstance>()
{
	return UMyGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
UMyGameInstance::~UMyGameInstance() {}
// End Class UMyGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstance, UMyGameInstance::StaticClass, TEXT("UMyGameInstance"), &Z_Registration_Info_UClass_UMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstance), 120017715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_569319945(TEXT("/Script/Rouge"),
	Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_MyGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
