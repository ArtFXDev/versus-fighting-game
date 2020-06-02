// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BaseGameInstance.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ECharacterClass : uint8
{
	VE_Default UMETA(DisplayName = "Balanced"),
	VE_FunkyAgent UMETA(DisplayName = "FunkyAgent"),
	VE_Oscar UMETA(DisplayName = "Oscar"),
	VE_TeddyBurn UMETA(DisplayName = "TeddyBurn"),
	VE_BoxWarrior UMETA(DisplayName = "BoxWarrior")
};

UENUM(BlueprintType)
enum class ECharacterClass2 : uint8
{
	VE_Default UMETA(DisplayName = "Balanced"),
	VE_FunkyAgent UMETA(DisplayName = "FunkyAgent"),
	VE_Oscar UMETA(DisplayName = "Oscar"),
	VE_TeddyBurn UMETA(DisplayName = "TeddyBurn"),
	VE_BoxWarrior UMETA(DisplayName = "BoxWarrior")
};

UCLASS()
class SMASHBROSTEST_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	ECharacterClass characterClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	ECharacterClass2 characterClass2;
};
