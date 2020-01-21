// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InputCoreTypes.h"
#include "Engine/EngineTypes.h"
#include "Barrel.h"
#include "Interinterface.h"
#include "InputCoreTypes.h"
#include "UE4CCP_Assignment1Character.h"
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

class UWidget;

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

	UFUNCTION(BlueprintNativeEvent, Category = "Custom Events")
		void PrimaryFire(AController* controller);
	void PrimaryFire_Implementation(AController* controller) {};

	UFUNCTION(BlueprintNativeEvent, Category = "Custom Events")
		void SecondaryFire(AController* controller);
	void SecondaryFire_Implementation(AController* controller) {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction Widget")
		UWidget* interactionWidget;

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
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (HideSelfPin), Category = "Weapon Functions")
	void Fire(UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, TArray<FHitResult>& Hits, bool& bHitResult);
	void Fire_Implementation(UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, TArray<FHitResult>& Hits, bool& bHitResult);
		
	void Fire_Auto();
	/*UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (HideSelfPin, ExpandEnumAsExecs = "Repeat"), Category = "Weapon Functions")
	void Fire_Burst(ERepeat Repeat, UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, int BulletCount, float TimeBetweenBullets, float TimeBetweenBursts, FKey FireKey, TArray<FHitResult>& Hits, bool& bHitResult);
	void Fire_Burst_Implementation(ERepeat Repeat, UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, int BulletCount, float TimeBetweenBullets, float TimeBetweenBursts, FKey FireKey, TArray<FHitResult>& Hits, bool& bHitResult);
	
	UFUNCTION()
	void Fire_Burst_Hidden(UPARAM(ref) TArray<UBarrel*>& Barrels, FVector EndPoint, FVector2D Spread, TArray<FHitResult>& Hits, bool& bHitResult);*/

	virtual void OnInteract_Implementation(AActor* Caller) override;

private:
	//int BurstCount = 0;
	////REMEMBER to clear timer on destroy/deactivate
	//FTimerHandle RepeatHandle;
	
};
