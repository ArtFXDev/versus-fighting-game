// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SmashBrosTestCharacter.generated.h"

UCLASS(config=Game)
class ASmashBrosTestCharacter : public ACharacter
{
	GENERATED_BODY()

	///** Side view camera */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	//class UCameraComponent* SideViewCameraComponent;

	///** Camera boom positioning the camera beside the character */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	//class USpringArmComponent* CameraBoom;



	//Setting up the player different attacks
	void StartAttack1();
	void StartAttack2();
	void StartAttack3();

	//When in Keyboard-only Mode, use these functions to perform action with Player2

	UFUNCTION(BlueprintCallable, Category = "Player Moves")
	void FunkyKeyboardAttack1();

	UFUNCTION(BlueprintCallable, Category = "Player Moves")
	void FunkyKeyboardAttack2();

	UFUNCTION(BlueprintCallable, Category = "Player Moves")
	void FunkyKeyboardAttack3();

	UFUNCTION(BlueprintCallable, Category ="Player Moves")
	void FunkyKeyboardJump();

	UFUNCTION(BlueprintCallable, Category = "Player Moves")
	void FunkyKeyboardStopJumping();

	UFUNCTION(BlueprintCallable, Category = "Player Moves")
	void FunkyKeyboardMoveRight(float _value);



protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	
	// End of APawn interface

	//Hurt Box
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	AActor* hurtbox;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	//ECharacterClass characterClass;

	//Damage the player
	UFUNCTION(BlueprintCallable, Category = "Hitbox")
	void TakeDamage(float _damageAmount);

	//Has the player used the basic attack ?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacks")
	bool wasPunchUsed;

	//Current Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float playerHealth;

	//DeviceForMutiplayer  NOT NECESSARY
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controller")
	bool isDeviceForMultiplePlayers;

public:
	ASmashBrosTestCharacter();

	///** Returns SideViewCameraComponent subobject **/
	//FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	///** Returns CameraBoom subobject **/
	//FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
