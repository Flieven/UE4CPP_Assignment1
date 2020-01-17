// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InputCoreTypes.h"
#include "Engine/EngineTypes.h"
#include "Barrel.h"
#include "Weapon.generated.h"


UENUM(BlueprintType)
enum class EFiringModes : uint8
{
	FM_Burst	UMETA(DisplayName = "Burst"),
	FM_Auto		UMETA(DisplayName = "Auto"),
	FM_Semi		UMETA(DisplayName = "Semi")
};

UENUM()
enum class ERepeat : uint8 {
	Start		UMETA(DisplayName = " "),
	Repeat	UMETA(DisplayName = "Repeat")
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4CCP_ASSIGNMENT1_API UWeapon : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeapon();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	class USkeletalMesh* WeaponMesh;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	class UMaterial* WeaponMat;
	
	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	class UParticleSystem* FiringParticles;
		
	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	class USoundCue* FiringAudio;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	class USoundCue* ReloadAudio;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	EFiringModes CurrentFiringMode;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	int BulletsPerShot;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	int MaximumAmmo;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	int MaximumClipSize;
	
	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	float ReloadTime;

	//Maximum Horizontal and Vertical Spread
	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	FVector2D BulletSpread;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (HideSelfPin), Category = "Weapon Functions")
	void Fire(UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, TArray<FHitResult>& Hits, bool& bHitResult);
	void Fire_Implementation(UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, TArray<FHitResult>& Hits, bool& bHitResult);
		
	void Fire_Auto();

	/*UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (HideSelfPin, ExpandEnumAsExecs = "Repeat"), Category = "Weapon Functions")
	void Fire_Burst(ERepeat Repeat, UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, int BulletCount, float TimeBetweenBullets, float TimeBetweenBursts, FKey FireKey, TArray<FHitResult>& Hits, bool& bHitResult);
	void Fire_Burst_Implementation(ERepeat Repeat, UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, int BulletCount, float TimeBetweenBullets, float TimeBetweenBursts, FKey FireKey, TArray<FHitResult>& Hits, bool& bHitResult);
	
	UFUNCTION()
	void Fire_Burst_Hidden(UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, TArray<FHitResult>& Hits, bool& bHitResult);*/

private:
	//int BurstCount = 0;
	////REMEMBER to clear timer on destroy/deactivate
	//FTimerHandle RepeatHandle;
	
};
