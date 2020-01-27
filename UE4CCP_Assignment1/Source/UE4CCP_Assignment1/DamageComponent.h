// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <CoreMinimal.h>
#include <Components/ActorComponent.h>
#include "DamageComponent.generated.h"

/**
 * Damaging component
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4CCP_ASSIGNMENT1_API UDamageComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDamageComponent();

	/**
	 * Complex damaging function
	 */
		void TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	/**
	 * Simple damaging function
	 */
	UFUNCTION()
		void TakeDamage(float Damage);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float DefaultHealth; /** Default health value of object */

	UPROPERTY(BlueprintReadWrite)
		float Health; /** Current health value of object */

	
};
