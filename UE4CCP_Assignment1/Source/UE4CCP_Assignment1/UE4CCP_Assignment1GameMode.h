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

		

public:
	AUE4CCP_Assignment1GameMode();

	/*UFUNCTION(BlueprintCallable, Category = "GameMode Functions")
		TArray<UAmmoBase*>& GetSavedAmmoTypes();
	UFUNCTION(BlueprintCallable, Category = "GameMode Functions")
		void SetAmmoInformation(UAmmoBase* AmmoType);
	UFUNCTION(BlueprintCallable, Category = "GameMode Functions")
		UAmmoBase* GetAmmoInformation(UAmmoBase* AmmoType);*/

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode Properties")
		TArray<UAmmoBase*> SavedAmmoTypes;*/

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode Properties")
		//ULineTraceAmmo* LinetraceAmmoType = NewObject<ULineTraceAmmo>();

		/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode Properties")
		UProjectileAmmo* ProjectileAmmoType = NewObject<UProjectileAmmo>();*/

		/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode Properties")
			ULineTraceAmmo LinetraceAmmoType = new ULineTraceAmmo();

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode Properties")
			UProjectileAmmo ProjectileAmmoType = UProjectileAmmo();*/



private:
	//UProjectileAmmo* TestType = NewObject<UProjectileAmmo>();
};



