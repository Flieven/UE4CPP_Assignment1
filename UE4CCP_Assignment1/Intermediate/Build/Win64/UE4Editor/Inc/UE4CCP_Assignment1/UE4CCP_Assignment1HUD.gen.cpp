// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CCP_Assignment1/UE4CCP_Assignment1HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4CCP_Assignment1HUD() {}
// Cross Module References
	UE4CCP_ASSIGNMENT1_API UClass* Z_Construct_UClass_AUE4CCP_Assignment1HUD_NoRegister();
	UE4CCP_ASSIGNMENT1_API UClass* Z_Construct_UClass_AUE4CCP_Assignment1HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UE4CCP_Assignment1();
// End Cross Module References
	void AUE4CCP_Assignment1HUD::StaticRegisterNativesAUE4CCP_Assignment1HUD()
	{
	}
	UClass* Z_Construct_UClass_AUE4CCP_Assignment1HUD_NoRegister()
	{
		return AUE4CCP_Assignment1HUD::StaticClass();
	}
	struct Z_Construct_UClass_AUE4CCP_Assignment1HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4CCP_Assignment1HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CCP_Assignment1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UE4CCP_Assignment1HUD.h" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4CCP_Assignment1HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4CCP_Assignment1HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4CCP_Assignment1HUD_Statics::ClassParams = {
		&AUE4CCP_Assignment1HUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4CCP_Assignment1HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4CCP_Assignment1HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4CCP_Assignment1HUD, 3716963799);
	template<> UE4CCP_ASSIGNMENT1_API UClass* StaticClass<AUE4CCP_Assignment1HUD>()
	{
		return AUE4CCP_Assignment1HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4CCP_Assignment1HUD(Z_Construct_UClass_AUE4CCP_Assignment1HUD, &AUE4CCP_Assignment1HUD::StaticClass, TEXT("/Script/UE4CCP_Assignment1"), TEXT("AUE4CCP_Assignment1HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4CCP_Assignment1HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
