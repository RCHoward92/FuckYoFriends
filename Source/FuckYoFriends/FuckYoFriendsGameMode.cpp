// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FuckYoFriendsGameMode.h"
#include "FuckYoFriendsCharacter.h"

AFuckYoFriendsGameMode::AFuckYoFriendsGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AFuckYoFriendsCharacter::StaticClass();	
}
