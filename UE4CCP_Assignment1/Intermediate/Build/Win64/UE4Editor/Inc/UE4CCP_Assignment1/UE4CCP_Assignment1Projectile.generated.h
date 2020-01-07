// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UE4CCP_ASSIGNMENT1_UE4CCP_Assignment1Projectile_generated_h
#error "UE4CCP_Assignment1Projectile.generated.h already included, missing '#pragma once' in UE4CCP_Assignment1Projectile.h"
#endif
#define UE4CCP_ASSIGNMENT1_UE4CCP_Assignment1Projectile_generated_h

#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_SPARSE_DATA
#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE4CCP_Assignment1Projectile(); \
	friend struct Z_Construct_UClass_AUE4CCP_Assignment1Projectile_Statics; \
public: \
	DECLARE_CLASS(AUE4CCP_Assignment1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4CCP_Assignment1"), NO_API) \
	DECLARE_SERIALIZER(AUE4CCP_Assignment1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUE4CCP_Assignment1Projectile(); \
	friend struct Z_Construct_UClass_AUE4CCP_Assignment1Projectile_Statics; \
public: \
	DECLARE_CLASS(AUE4CCP_Assignment1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4CCP_Assignment1"), NO_API) \
	DECLARE_SERIALIZER(AUE4CCP_Assignment1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUE4CCP_Assignment1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUE4CCP_Assignment1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4CCP_Assignment1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4CCP_Assignment1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4CCP_Assignment1Projectile(AUE4CCP_Assignment1Projectile&&); \
	NO_API AUE4CCP_Assignment1Projectile(const AUE4CCP_Assignment1Projectile&); \
public:


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4CCP_Assignment1Projectile(AUE4CCP_Assignment1Projectile&&); \
	NO_API AUE4CCP_Assignment1Projectile(const AUE4CCP_Assignment1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4CCP_Assignment1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4CCP_Assignment1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUE4CCP_Assignment1Projectile)


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUE4CCP_Assignment1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUE4CCP_Assignment1Projectile, ProjectileMovement); }


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_9_PROLOG
#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_SPARSE_DATA \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_RPC_WRAPPERS \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_INCLASS \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_SPARSE_DATA \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_INCLASS_NO_PURE_DECLS \
	UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4CCP_ASSIGNMENT1_API UClass* StaticClass<class AUE4CCP_Assignment1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4CCP_Assignment1_Source_UE4CCP_Assignment1_UE4CCP_Assignment1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
