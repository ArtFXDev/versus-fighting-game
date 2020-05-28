// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SmashBrosTestGameMode.generated.h"


UENUM(BlueprintType)
enum class ECharacterClass : uint8
{
	VE_Default UMETA(DisplayName = "Balanced"),
	VE_FunkyAgent UMETA(DisplayName = "FunkyAgent"),
	VE_Oscar UMETA(DisplayName = "Oscar"),
	VE_TeddyBurn UMETA(DisplayName = "TeddyBurn"),
	VE_BoxWarrior UMETA(DisplayName = "BoxWarrior")
};

UCLASS(minimalapi)
class ASmashBrosTestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASmashBrosTestGameMode();
};



