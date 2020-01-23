// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4CCP_Assignment1GameMode.h"
#include "UE4CCP_Assignment1HUD.h"
#include "UE4CCP_Assignment1Character.h"
#include "UObject/ConstructorHelpers.h"

AUE4CCP_Assignment1GameMode::AUE4CCP_Assignment1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4CCP_Assignment1HUD::StaticClass();
}

void AUE4CCP_Assignment1GameMode::SetAmmoInformation(TArray<UAmmoBase*> AmmoTypes)
{
	SavedAmmoTypes = AmmoTypes;
}

UAmmoBase* AUE4CCP_Assignment1GameMode::GetAmmoInformation(UAmmoBase* AmmoType)
{
	if (SavedAmmoTypes.Num() != 0)
	{
		for (auto item : SavedAmmoTypes)
		{
			if (item == AmmoType)
			{
				return item;
			}
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Error 404: Array of ammo not found."))
	return nullptr;
}
