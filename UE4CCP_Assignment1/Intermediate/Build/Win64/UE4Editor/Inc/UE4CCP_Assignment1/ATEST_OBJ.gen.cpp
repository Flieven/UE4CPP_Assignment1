// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CCP_Assignment1/ATEST_OBJ.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATEST_OBJ() {}
// Cross Module References
	UE4CCP_ASSIGNMENT1_API UClass* Z_Construct_UClass_AATEST_OBJ_NoRegister();
	UE4CCP_ASSIGNMENT1_API UClass* Z_Construct_UClass_AATEST_OBJ();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE4CCP_Assignment1();
	UE4CCP_ASSIGNMENT1_API UFunction* Z_Construct_UFunction_AATEST_OBJ_OnInteract();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UE4CCP_ASSIGNMENT1_API UClass* Z_Construct_UClass_UInterinterface_NoRegister();
// End Cross Module References
	static FName NAME_AATEST_OBJ_OnInteract = FName(TEXT("OnInteract"));
	void AATEST_OBJ::OnInteract(AActor* Caller)
	{
		ATEST_OBJ_eventOnInteract_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_AATEST_OBJ_OnInteract),&Parms);
	}
	void AATEST_OBJ::StaticRegisterNativesAATEST_OBJ()
	{
		UClass* Class = AATEST_OBJ::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteract", &AATEST_OBJ::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AATEST_OBJ_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AATEST_OBJ_OnInteract_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATEST_OBJ_eventOnInteract_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AATEST_OBJ_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATEST_OBJ_OnInteract_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATEST_OBJ_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "ATEST_OBJ.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AATEST_OBJ_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AATEST_OBJ, nullptr, "OnInteract", nullptr, nullptr, sizeof(ATEST_OBJ_eventOnInteract_Parms), Z_Construct_UFunction_AATEST_OBJ_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AATEST_OBJ_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AATEST_OBJ_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AATEST_OBJ_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AATEST_OBJ_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AATEST_OBJ_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AATEST_OBJ_NoRegister()
	{
		return AATEST_OBJ::StaticClass();
	}
	struct Z_Construct_UClass_AATEST_OBJ_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AATEST_OBJ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CCP_Assignment1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AATEST_OBJ_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AATEST_OBJ_OnInteract, "OnInteract" }, // 1156731536
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATEST_OBJ_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ATEST_OBJ.h" },
		{ "ModuleRelativePath", "ATEST_OBJ.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATEST_OBJ_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ATEST_OBJ.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AATEST_OBJ_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AATEST_OBJ, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AATEST_OBJ_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AATEST_OBJ_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AATEST_OBJ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATEST_OBJ_Statics::NewProp_Mesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AATEST_OBJ_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterinterface_NoRegister, (int32)VTABLE_OFFSET(AATEST_OBJ, IInterinterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AATEST_OBJ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AATEST_OBJ>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AATEST_OBJ_Statics::ClassParams = {
		&AATEST_OBJ::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AATEST_OBJ_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AATEST_OBJ_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AATEST_OBJ_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AATEST_OBJ_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AATEST_OBJ()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AATEST_OBJ_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AATEST_OBJ, 3123210996);
	template<> UE4CCP_ASSIGNMENT1_API UClass* StaticClass<AATEST_OBJ>()
	{
		return AATEST_OBJ::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AATEST_OBJ(Z_Construct_UClass_AATEST_OBJ, &AATEST_OBJ::StaticClass, TEXT("/Script/UE4CCP_Assignment1"), TEXT("AATEST_OBJ"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AATEST_OBJ);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
