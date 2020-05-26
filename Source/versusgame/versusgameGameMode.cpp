// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "versusgameGameMode.h"
#include "versusgameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AversusgameGameMode::AversusgameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
