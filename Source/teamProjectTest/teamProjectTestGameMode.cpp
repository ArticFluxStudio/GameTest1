// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "teamProjectTest.h"
#include "teamProjectTestGameMode.h"
#include "teamProjectTestCharacter.h"

AteamProjectTestGameMode::AteamProjectTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
