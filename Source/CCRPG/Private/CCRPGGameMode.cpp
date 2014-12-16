// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "CCRPG.h"
#include "CCRPGGameMode.h"
#include "CCRPGPlayerController.h"
#include "CCRPGCharacter.h"

ACCRPGGameMode::ACCRPGGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// use our custom PlayerController class
	PlayerControllerClass = ACCRPGPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}