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
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AATEST_OBJ::StaticRegisterNativesAATEST_OBJ()
	{
	}
	UClass* Z_Construct_UClass_AATEST_OBJ_NoRegister()
	{
		return AATEST_OBJ::StaticClass();
	}
	struct Z_Construct_UClass_AATEST_OBJ_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AATEST_OBJ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CCP_Assignment1,
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AATEST_OBJ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AATEST_OBJ>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AATEST_OBJ_Statics::ClassParams = {
		&AATEST_OBJ::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AATEST_OBJ_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AATEST_OBJ_Statics::PropPointers),
		0,
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
	IMPLEMENT_CLASS(AATEST_OBJ, 4114722162);
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
