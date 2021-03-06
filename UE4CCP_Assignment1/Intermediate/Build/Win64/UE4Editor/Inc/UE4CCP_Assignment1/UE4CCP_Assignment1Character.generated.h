// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UE4CCP_ASSIGNMENT1_UE4CCP_Assignment1Character_generated_h
#error "UE4CCP_Assignment1Character.generated.h already included, missing '#pragma once' in UE4CCP_Assignment1Character.h"
#endif
#define UE4CCP_ASSIGNMENT1_UE4CCP_Assignment1Character_generated_h

#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_SPARSE_DATA
#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddToInventory) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToInventory(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateEquippedWeapon) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateEquippedWeapon(Z_Param_obj); \
		P_NATIVE_END; \
	}


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddToInventory) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToInventory(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateEquippedWeapon) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateEquippedWeapon(Z_Param_obj); \
		P_NATIVE_END; \
	}


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE4CCP_Assignment1Character(); \
	friend struct Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics; \
public: \
	DECLARE_CLASS(AUE4CCP_Assignment1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4CCP_Assignment1"), NO_API) \
	DECLARE_SERIALIZER(AUE4CCP_Assignment1Character)


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAUE4CCP_Assignment1Character(); \
	friend struct Z_Construct_UClass_AUE4CCP_Assignment1Character_Statics; \
public: \
	DECLARE_CLASS(AUE4CCP_Assignment1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4CCP_Assignment1"), NO_API) \
	DECLARE_SERIALIZER(AUE4CCP_Assignment1Character)


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUE4CCP_Assignment1Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUE4CCP_Assignment1Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4CCP_Assignment1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4CCP_Assignment1Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4CCP_Assignment1Character(AUE4CCP_Assignment1Character&&); \
	NO_API AUE4CCP_Assignment1Character(const AUE4CCP_Assignment1Character&); \
public:


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4CCP_Assignment1Character(AUE4CCP_Assignment1Character&&); \
	NO_API AUE4CCP_Assignment1Character(const AUE4CCP_Assignment1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4CCP_Assignment1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4CCP_Assignment1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUE4CCP_Assignment1Character)


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AUE4CCP_Assignment1Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentInventorySlot() { return STRUCT_OFFSET(AUE4CCP_Assignment1Character, CurrentInventorySlot); }


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_13_PROLOG
#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_PRIVATE_PROPERTY_OFFSET \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_SPARSE_DATA \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_RPC_WRAPPERS \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_INCLASS \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_PRIVATE_PROPERTY_OFFSET \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_SPARSE_DATA \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_INCLASS_NO_PURE_DECLS \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4CCP_ASSIGNMENT1_API UClass* StaticClass<class AUE4CCP_Assignment1Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
