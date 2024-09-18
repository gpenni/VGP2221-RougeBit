// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rouge/Collectable.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ROUGE_API UClass* Z_Construct_UClass_ACollectable();
ROUGE_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Rouge();
// End Cross Module References

// Begin Class ACollectable Function ChangePullRadius
struct Z_Construct_UFunction_ACollectable_ChangePullRadius_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collectable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_ChangePullRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "ChangePullRadius", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_ChangePullRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollectable_ChangePullRadius_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACollectable_ChangePullRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollectable_ChangePullRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACollectable::execChangePullRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangePullRadius();
	P_NATIVE_END;
}
// End Class ACollectable Function ChangePullRadius

// Begin Class ACollectable Function OnInnerOverlap
struct Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics
{
	struct Collectable_eventOnInnerOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collectable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnInnerOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnInnerOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnInnerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnInnerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Collectable_eventOnInnerOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Collectable_eventOnInnerOverlap_Parms), &Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnInnerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnInnerOverlap", nullptr, nullptr, Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::Collectable_eventOnInnerOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::Collectable_eventOnInnerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACollectable_OnInnerOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollectable_OnInnerOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACollectable::execOnInnerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInnerOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ACollectable Function OnInnerOverlap

// Begin Class ACollectable Function OnOverlapBegin
struct Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics
{
	struct Collectable_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collectable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Collectable_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Collectable_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::Collectable_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::Collectable_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACollectable_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollectable_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACollectable::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ACollectable Function OnOverlapBegin

// Begin Class ACollectable Function OnOverlapEnd
struct Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics
{
	struct Collectable_eventOnOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collectable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collectable_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::Collectable_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::Collectable_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACollectable_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollectable_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACollectable::execOnOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ACollectable Function OnOverlapEnd

// Begin Class ACollectable
void ACollectable::StaticRegisterNativesACollectable()
{
	UClass* Class = ACollectable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangePullRadius", &ACollectable::execChangePullRadius },
		{ "OnInnerOverlap", &ACollectable::execOnInnerOverlap },
		{ "OnOverlapBegin", &ACollectable::execOnOverlapBegin },
		{ "OnOverlapEnd", &ACollectable::execOnOverlapEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollectable);
UClass* Z_Construct_UClass_ACollectable_NoRegister()
{
	return ACollectable::StaticClass();
}
struct Z_Construct_UClass_ACollectable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Collectable.h" },
		{ "ModuleRelativePath", "Collectable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collectable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collectable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collectable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Collectable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InnerSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACollectable_ChangePullRadius, "ChangePullRadius" }, // 3602954838
		{ &Z_Construct_UFunction_ACollectable_OnInnerOverlap, "OnInnerOverlap" }, // 4049004128
		{ &Z_Construct_UFunction_ACollectable_OnOverlapBegin, "OnOverlapBegin" }, // 3479759686
		{ &Z_Construct_UFunction_ACollectable_OnOverlapEnd, "OnOverlapEnd" }, // 143975320
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectable, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_InnerSphere = { "InnerSphere", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectable, InnerSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerSphere_MetaData), NewProp_InnerSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectable, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphere_MetaData), NewProp_CollisionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectable, PickupSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSound_MetaData), NewProp_PickupSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_InnerSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_CollisionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_PickupSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACollectable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Rouge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollectable_Statics::ClassParams = {
	&ACollectable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACollectable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams), Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACollectable()
{
	if (!Z_Registration_Info_UClass_ACollectable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollectable.OuterSingleton, Z_Construct_UClass_ACollectable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACollectable.OuterSingleton;
}
template<> ROUGE_API UClass* StaticClass<ACollectable>()
{
	return ACollectable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectable);
ACollectable::~ACollectable() {}
// End Class ACollectable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACollectable, ACollectable::StaticClass, TEXT("ACollectable"), &Z_Registration_Info_UClass_ACollectable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollectable), 2142412815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_650330100(TEXT("/Script/Rouge"),
	Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_1_Documents_Unreal_Projects_RougeBit_Source_Rouge_Collectable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
