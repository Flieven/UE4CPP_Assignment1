// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InputCoreTypes.h"
#include "Engine/EngineTypes.h"
#include "Barrel.h"
#include "Interinterface.h"
#include "UE4CCP_Assignment1Character.h"
#include "Weapon.generated.h"


UENUM(BlueprintType)
enum class EFiringModes : uint8
{
	FM_Burst	UMETA(DisplayName = "Burst"),
	FM_Auto		UMETA(DisplayName = "Auto"),
	FM_Semi		UMETA(DisplayName = "Semi")
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4CCP_ASSIGNMENT1_API AWeapon : public AActor, public IInterinterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	AWeapon();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:

	UPROPERTY(VisibleDefaultsOnly, Category = "Weapon Assets")
	class USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	class UMaterial* WeaponMat;
	
	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	class UParticleSystem* FiringParticles;
		
	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	class USoundCue* FiringAudio;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	class USoundCue* ReloadAudio;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Data")
	EFiringModes CurrentFiringMode;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Data")
	int BulletsPerShot;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Data")
	int MaximumAmmo;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Data")
	int MaximumClipSize;

	UPROPERTY(EditInstanceOnly, Category = "Weapon Data")
	int CurrentClipAmmo;
	
	UPROPERTY(EditInstanceOnly, Category = "Weapon Data")
	float ReloadTime;

	
	//Maximum Horizontal and Vertical Spread
	UPROPERTY(EditInstanceOnly, Category = "Weapon Data")
	FVector2D BulletSpread;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (HideSelfPin), Category = "Weapon Functions")
	void Fire(UPARAM(ref) TArray<UBarrel*>& Barrels, AController* controller, TArray<UBarrel*>& SuccesfulBarrels);
	void Fire_Implementation(UPARAM(ref) TArray<UBarrel*>& Barrels, AController* controller, TArray<UBarrel*>& SuccesfulBarrels);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon Functions")
	void Reload(UPARAM(ref) TArray<UBarrel*>& Barrels);
	void Reload_Implementation(UPARAM(ref) TArray<UBarrel*>& Barrels);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Custom Events")
		void PrimaryFire(AController* controller, bool active);
	void PrimaryFire_Implementation(AController* controller, bool active) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Custom Events")
		void SecondaryFire(AController* controller, bool active);
	void SecondaryFire_Implementation(AController* controller, bool active) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnInteract(AActor* Caller);
	virtual void OnInteract_Implementation(AActor* Caller);

};