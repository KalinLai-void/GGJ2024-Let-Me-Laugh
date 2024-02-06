// Copyright Epic Games, Inc. All Rights Reserved.

#include "GGJ2024GameMode.h"
#include "GGJ2024Character.h"
#include "UObject/ConstructorHelpers.h"

AGGJ2024GameMode::AGGJ2024GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
