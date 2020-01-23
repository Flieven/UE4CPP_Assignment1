// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CCP_Assignment1/UE4CCP_Assignment1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4CCP_Assignment1GameMode() {}
// Cross Module References
	UE4CCP_ASSIGNMENT1_API UClass* Z_Construct_UClass_AUE4CCP_Assignment1GameMode_NoRegister();
	UE4CCP_ASSIGNMENT1_API UClass* Z_Construct_UClass_AUE4CCP_Assignment1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4CCP_Assignment1();
	UE4CCP_ASSIGNMENT1_API UFunction* Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation();
	UE4CCP_ASSIGNMENT1_API UClass* Z_Construct_UClass_UAmmoBase_NoRegister();
	UE4CCP_ASSIGNMENT1_API UFunction* Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation();
// End Cross Module References
	void AUE4CCP_Assignment1GameMode::StaticRegisterNativesAUE4CCP_Assignment1GameMode()
	{
		UClass* Class = AUE4CCP_Assignment1GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmmoInformation", &AUE4CCP_Assignment1GameMode::execGetAmmoInformation },
			{ "SetAmmoInformation", &AUE4CCP_Assignment1GameMode::execSetAmmoInformation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics
	{
		struct UE4CCP_Assignment1GameMode_eventGetAmmoInformation_Parms
		{
			UAmmoBase* AmmoType;
			UAmmoBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UE4CCP_Assignment1GameMode_eventGetAmmoInformation_Parms, ReturnValue), Z_Construct_UClass_UAmmoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UE4CCP_Assignment1GameMode_eventGetAmmoInformation_Parms, AmmoType), Z_Construct_UClass_UAmmoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::NewProp_AmmoType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UE4CCP_Assignment1GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE4CCP_Assignment1GameMode, nullptr, "GetAmmoInformation", nullptr, nullptr, sizeof(UE4CCP_Assignment1GameMode_eventGetAmmoInformation_Parms), Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics
	{
		struct UE4CCP_Assignment1GameMode_eventSetAmmoInformation_Parms
		{
			TArray<UAmmoBase*> AmmoTypes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AmmoTypes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoTypes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::NewProp_AmmoTypes = { "AmmoTypes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UE4CCP_Assignment1GameMode_eventSetAmmoInformation_Parms, AmmoTypes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::NewProp_AmmoTypes_Inner = { "AmmoTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAmmoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::NewProp_AmmoTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::NewProp_AmmoTypes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UE4CCP_Assignment1GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE4CCP_Assignment1GameMode, nullptr, "SetAmmoInformation", nullptr, nullptr, sizeof(UE4CCP_Assignment1GameMode_eventSetAmmoInformation_Parms), Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUE4CCP_Assignment1GameMode_NoRegister()
	{
		return AUE4CCP_Assignment1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE4CCP_Assignment1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4CCP_Assignment1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CCP_Assignment1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUE4CCP_Assignment1GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_GetAmmoInformation, "GetAmmoInformation" }, // 2107205647
		{ &Z_Construct_UFunction_AUE4CCP_Assignment1GameMode_SetAmmoInformation, "SetAmmoInformation" }, // 3587842261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4CCP_Assignment1GameMode.h" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4CCP_Assignment1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4CCP_Assignment1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4CCP_Assignment1GameMode_Statics::ClassParams = {
		&AUE4CCP_Assignment1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4CCP_Assignment1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4CCP_Assignment1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4CCP_Assignment1GameMode, 643269809);
	template<> UE4CCP_ASSIGNMENT1_API UClass* StaticClass<AUE4CCP_Assignment1GameMode>()
	{
		return AUE4CCP_Assignment1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4CCP_Assignment1GameMode(Z_Construct_UClass_AUE4CCP_Assignment1GameMode, &AUE4CCP_Assignment1GameMode::StaticClass, TEXT("/Script/UE4CCP_Assignment1"), TEXT("AUE4CCP_Assignment1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4CCP_Assignment1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
