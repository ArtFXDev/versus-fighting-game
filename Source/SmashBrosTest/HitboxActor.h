// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitboxActor.generated.h"


UENUM(BlueprintType)
enum class EHitboxEnum : uint8
{
	HB_PROXIMTY	UMETA(DisplayName = "Proximity"),
	HB_STRIKE UMETA(DisplayName = "Strike"),
	HB_HURTBOX UMETA(DisplayName = "Hurtbox"),
};

UCLASS()
class SMASHBROSTEST_API AHitboxActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHitboxActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	float hitboxDamage;

	//The hitbox enum instance.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	EHitboxEnum hitboxType;

	//Location to spawn the hitbox
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	FVector hitboxLocation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
