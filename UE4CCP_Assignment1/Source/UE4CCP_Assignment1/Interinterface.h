// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Interinterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterinterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interaction interface
 */
class UE4CCP_ASSIGNMENT1_API IInterinterface
{
	GENERATED_BODY()


	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/**
	 * Interaction function
	 * Overwritten by implementations in other classes
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
		void OnInteract(AActor* Caller);
	virtual void OnInteract_Implementation(AActor* Caller){};

	/**
	 * [UNUSED]
	 * Focus function
	 * Allows implementation of functions if intractable object is looked at
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
		void StartFocus();
	/**
	* [UNUSED]
	 * Focus function
	* Allows stops implementation of functions if intractable object is no longer looked at
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
		void EndFocus();


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interaction")
		void OnOverlap(AActor* Caller);
	virtual void OnOverlap_Implementation(AActor* Caller) {};
};
