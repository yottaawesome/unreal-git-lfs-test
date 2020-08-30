// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CppFirstPersonHUD.generated.h"

UCLASS()
class ACppFirstPersonHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACppFirstPersonHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

