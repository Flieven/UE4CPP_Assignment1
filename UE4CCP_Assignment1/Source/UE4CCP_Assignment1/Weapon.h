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

/**
 * Base weapon class
 * Derived from actor and interaction interface
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4CCP_ASSIGNMENT1_API AWeapon : public AActor, public IInterinterface
{
	GENERATED_BODY()

	TArray<FRotator> RecoilArray; /** Array of all fired barrels recoil values (at the time of firing) */

public:	
	// Sets default values for this component's properties
	AWeapon();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:

	UPROPERTY(VisibleDefaultsOnly, Category = "Weapon Assets")
	class USkeletalMeshComponent* WeaponMesh; /** Mesh of the weapon */

	UPROPERTY(EditInstanceOnly, Category = "Weapon Assets")
	class USoundCue* ReloadAudio; /** [UNUSED] audio cue when weapon is reloaded */

	UPROPERTY(EditInstanceOnly, Category = "Weapon Data")
	int MaximumAmmo; /** [UNUSED] Maximum amount of ammo that can be stored in the weapon */
	
	UPROPERTY(EditInstanceOnly, Category = "Weapon Data")
	float ReloadTime; /** [UNUSED] Time it takes to reload weapon */

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	 * Fire the weapon
	 * Fire_Implementation actually implements the firing function
	 * Takes an array of barrels to fire
	 * Take a reference to the controller that is firing the weapon
	 * Returns an array of rotators used for recoil calculations in a recoil component (if any)
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (HideSelfPin), Category = "Weapon Functions")
	TArray<FRotator> Fire(UPARAM(ref) TArray<UBarrel*>& Barrels, AController* controller);
	TArray<FRotator> Fire_Implementation(UPARAM(ref) TArray<UBarrel*>& Barrels, AController* controller);
	
	/**
	 * [UNUSED]
	 * Reload the weapon
	 * Reload_Implementation actually implements the reload function
	 * Takes an array of barrels to call reload on
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Weapon Functions")
		void Reload(AActor* Caller, UBarrel* Barrel);
	void Reload_Implementation(AActor* Caller, UBarrel* Barrel);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Weapon Functions")
	void ReloadExtrenally(AActor* Caller);
	void ReloadExternally_Implementation(AActor* Caller);


	/**
	 * Primary event used to access blueprint from other blueprints
	 * That's the intended use anyway
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Custom Events")
		void PrimaryFire(AController* controller, bool active);
	void PrimaryFire_Implementation(AController* controller, bool active) {};

	/**
	 * Secondary event used to access blueprint from other blueprints
	 * Just in case you needed two of them
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Custom Events")
		void SecondaryFire(AController* controller, bool active);
	void SecondaryFire_Implementation(AController* controller, bool active) {};

	/**
	 * Implementation of interface interaction function
	 * Used for when something interacts with the object
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnInteract(AActor* Caller);
	virtual void OnInteract_Implementation(AActor* Caller);

};