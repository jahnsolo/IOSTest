// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "IOSTest.h"
#include "IOSTestGameMode.h"
#include "IOSTestBall.h"

AIOSTestGameMode::AIOSTestGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AIOSTestBall::StaticClass();
}
