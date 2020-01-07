// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UE4CCP_Assignment1HUD.generated.h"

UCLASS()
class AUE4CCP_Assignment1HUD : public AHUD
{
	GENERATED_BODY()

public:
	AUE4CCP_Assignment1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

