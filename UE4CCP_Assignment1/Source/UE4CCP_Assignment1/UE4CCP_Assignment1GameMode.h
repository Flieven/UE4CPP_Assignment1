// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AmmoBase.h"
#include "UE4CCP_Assignment1GameMode.generated.h"

UCLASS(minimalapi)
class AUE4CCP_Assignment1GameMode : public AGameModeBase
{
	GENERATED_BODY()

		TArray<UAmmoBase*> SavedAmmoTypes;

public:
	AUE4CCP_Assignment1GameMode();

	UFUNCTION(BlueprintCallable)
		void SetAmmoInformation(TArray<UAmmoBase*> AmmoTypes);
	UFUNCTION()
		UAmmoBase* GetAmmoInformation(UAmmoBase* AmmoType);
};



