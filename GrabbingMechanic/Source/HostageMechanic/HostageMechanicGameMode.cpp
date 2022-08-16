// Copyright Epic Games, Inc. All Rights Reserved.

#include "HostageMechanicGameMode.h"
#include "HostageMechanicHUD.h"
#include "HostageMechanicCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHostageMechanicGameMode::AHostageMechanicGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/MyContent/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHostageMechanicHUD::StaticClass();
}
