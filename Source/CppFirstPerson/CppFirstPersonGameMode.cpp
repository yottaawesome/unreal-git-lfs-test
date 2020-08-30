// Copyright Epic Games, Inc. All Rights Reserved.

#include "CppFirstPersonGameMode.h"
#include "CppFirstPersonHUD.h"
#include "CppFirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACppFirstPersonGameMode::ACppFirstPersonGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACppFirstPersonHUD::StaticClass();
}
