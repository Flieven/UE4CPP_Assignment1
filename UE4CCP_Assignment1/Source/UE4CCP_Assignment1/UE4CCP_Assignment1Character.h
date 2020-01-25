// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UE4CCP_Assignment1Character.generated.h"

class UInputComponent;
class UDamageComponent;

UCLASS(config=Game)
class AUE4CCP_Assignment1Character : public ACharacter
{
	GENERATED_BODY()

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

private:

	UPROPERTY()
		int CurrentInventorySlot = 0;

	UPROPERTY()
		class UUInventoryComponent* Inventory;

	void YeetEquippedWeapon();

public:
	AUE4CCP_Assignment1Character();

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
		class USkeletalMeshComponent* Mesh1P;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UAnimMontage* FireAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		class AActor* EquippedObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		float InteractionDist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float YeetStrength = 1000.0f;

	UFUNCTION()
		void UpdateEquippedWeapon(AActor* obj);

	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

protected:
	virtual void BeginPlay();

	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles strafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/**
	 * Update the equipped object reference to current slot
	 */
	void UpdateCurrentSlot();
	/**
	 * Update to next slot number for inventory
	 */
	void UpdateSlotNumber(float value);

	/**
	 * Drop the currently equipped object
	 */
	void DropItem();

	/**
	 * Line trace from character forward and activate if hitting something
	 * Current hit ables: anything with an interaction interface that is tagged "PickUp"
	 */
	void Interact();
	
	/**
	 * Attempts to update and add given object to the inventory
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory Management")
	void AddToInventory(AActor* Object);

	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface
};

