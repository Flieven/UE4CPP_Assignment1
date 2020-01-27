// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CCP_Assignment1/UE4CCP_Assignment1Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4CCP_Assignment1Character() {}
// Cross Module References
	UE4CCP_ASSIGNMENT1_API UClass* Z_Construct_UClass_AUE4CCP_Assignment1Character_NoRegister();
	UE4CCP_ASSIGNMENT1_API UClass* Z_Construct_UClass_AUE4CCP_Assignment1Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UE4CCP_Assignment1();
	UE4CCP_ASSIGNMENT1_API UFunction* Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UE4CCP_ASSIGNMENT1_API UFunction* Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UE4CCP_ASSIGNMENT1_API UFunction* Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon();
	UE4CCP_ASSIGNMENT1_API UClass* Z_Construct_UClass_UUInventoryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AUE4CCP_Assignment1Character::StaticRegisterNativesAUE4CCP_Assignment1Character()
	{
		UClass* Class = AUE4CCP_Assignment1Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventory", &AUE4CCP_Assignment1Character::execAddToInventory },
			{ "BeginOverlap", &AUE4CCP_Assignment1Character::execBeginOverlap },
			{ "UpdateEquippedWeapon", &AUE4CCP_Assignment1Character::execUpdateEquippedWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory_Statics
	{
		struct UE4CCP_Assignment1Character_eventAddToInventory_Parms
		{
			AActor* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UE4CCP_Assignment1Character_eventAddToInventory_Parms, Object), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Management" },
		{ "Comment", "/**\n\x09 * Attempts to update and add given object to the inventory\n\x09 */" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
		{ "ToolTip", "Attempts to update and add given object to the inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE4CCP_Assignment1Character, nullptr, "AddToInventory", nullptr, nullptr, sizeof(UE4CCP_Assignment1Character_eventAddToInventory_Parms), Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics
	{
		struct UE4CCP_Assignment1Character_eventBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UE4CCP_Assignment1Character_eventBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((UE4CCP_Assignment1Character_eventBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UE4CCP_Assignment1Character_eventBeginOverlap_Parms), &Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UE4CCP_Assignment1Character_eventBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UE4CCP_Assignment1Character_eventBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UE4CCP_Assignment1Character_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UE4CCP_Assignment1Character_eventBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE4CCP_Assignment1Character, nullptr, "BeginOverlap", nullptr, nullptr, sizeof(UE4CCP_Assignment1Character_eventBeginOverlap_Parms), Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon_Statics
	{
		struct UE4CCP_Assignment1Character_eventUpdateEquippedWeapon_Parms
		{
			AActor* obj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UE4CCP_Assignment1Character_eventUpdateEquippedWeapon_Parms, obj), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon_Statics::NewProp_obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE4CCP_Assignment1Character, nullptr, "UpdateEquippedWeapon", nullptr, nullptr, sizeof(UE4CCP_Assignment1Character_eventUpdateEquippedWeapon_Parms), Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUE4CCP_Assignment1Character_NoRegister()
	{
		return AUE4CCP_Assignment1Character::StaticClass();
	}
	struct Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YeetStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YeetStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInventorySlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentInventorySlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CCP_Assignment1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUE4CCP_Assignment1Character_AddToInventory, "AddToInventory" }, // 2724460235
		{ &Z_Construct_UFunction_AUE4CCP_Assignment1Character_BeginOverlap, "BeginOverlap" }, // 3751631939
		{ &Z_Construct_UFunction_AUE4CCP_Assignment1Character_UpdateEquippedWeapon, "UpdateEquippedWeapon" }, // 4017960602
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UE4CCP_Assignment1Character.h" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CCP_Assignment1Character, Inventory), Z_Construct_UClass_UUInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_YeetStrength_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_YeetStrength = { "YeetStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CCP_Assignment1Character, YeetStrength), METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_YeetStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_YeetStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_InteractionDist_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_InteractionDist = { "InteractionDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CCP_Assignment1Character, InteractionDist), METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_InteractionDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_InteractionDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_EquippedObject_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_EquippedObject = { "EquippedObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CCP_Assignment1Character, EquippedObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_EquippedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_EquippedObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CCP_Assignment1Character, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CCP_Assignment1Character, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CCP_Assignment1Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CCP_Assignment1Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CCP_Assignment1Character, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_CurrentInventorySlot_MetaData[] = {
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_CurrentInventorySlot = { "CurrentInventorySlot", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CCP_Assignment1Character, CurrentInventorySlot), METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_CurrentInventorySlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_CurrentInventorySlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4CCP_Assignment1Character.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CCP_Assignment1Character, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_YeetStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_InteractionDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_EquippedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_CurrentInventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::NewProp_FirstPersonCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4CCP_Assignment1Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::ClassParams = {
		&AUE4CCP_Assignment1Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4CCP_Assignment1Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4CCP_Assignment1Character, 3434868981);
	template<> UE4CCP_ASSIGNMENT1_API UClass* StaticClass<AUE4CCP_Assignment1Character>()
	{
		return AUE4CCP_Assignment1Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4CCP_Assignment1Character(Z_Construct_UClass_AUE4CCP_Assignment1Character, &AUE4CCP_Assignment1Character::StaticClass, TEXT("/Script/UE4CCP_Assignment1"), TEXT("AUE4CCP_Assignment1Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4CCP_Assignment1Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
