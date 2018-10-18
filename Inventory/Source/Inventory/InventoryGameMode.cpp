// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "InventoryGameMode.h"
#include "InventoryHUD.h"
#include "InventoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInventoryGameMode::AInventoryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInventoryHUD::StaticClass();
}
