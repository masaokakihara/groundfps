// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "groundfpsGameMode.h"
#include "groundfpsHUD.h"
#include "groundfpsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AgroundfpsGameMode::AgroundfpsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AgroundfpsHUD::StaticClass();
}
