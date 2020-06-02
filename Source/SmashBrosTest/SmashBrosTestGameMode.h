// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SmashBrosTestCharacter.h"
#include "SmashBrosTestGameMode.generated.h"

UCLASS(minimalapi)
class ASmashBrosTestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASmashBrosTestGameMode();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	ASmashBrosTestCharacter* player1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	ASmashBrosTestCharacter* player2;
};



