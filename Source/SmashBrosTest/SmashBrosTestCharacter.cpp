// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SmashBrosTestCharacter.h"
#include "SmashBrosTestGameMode.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ASmashBrosTestCharacter::ASmashBrosTestCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	 
	//// Create a camera boom attached to the root (capsule)
	//CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	//CameraBoom->SetupAttachment(RootComponent);
	//CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	//CameraBoom->bDoCollisionTest = false;
	//CameraBoom->TargetArmLength = 500.f;
	//CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	//CameraBoom->SetRelativeRotation(FRotator(0.f,180.f,0.f));

	//// Create a camera and attach to boom
	//SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	//SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	//SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	hurtbox = nullptr;
	playerHealth = 1.00f;
	wasPunchUsed = false;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ASmashBrosTestCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	if (auto gameMode = Cast<ASmashBrosTestGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (gameMode->player1 == this)
		{
			UE_LOG(LogTemp, Warning, TEXT("Player 1 has bound their controls"));
			// set up gameplay key bindings
			PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
			PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
			PlayerInputComponent->BindAxis("MoveRight", this, &ASmashBrosTestCharacter::MoveRight);

			PlayerInputComponent->BindAction("Attack1", IE_Pressed, this, &ASmashBrosTestCharacter::StartAttack1);
			//PlayerInputComponent->BindAction("Attack1", IE_Released, this, &ASmashBrosTestCharacter::StopAttack1);
			PlayerInputComponent->BindAction("Attack2", IE_Pressed, this, &ASmashBrosTestCharacter::StartAttack2);
			//PlayerInputComponent->BindAction("Attack2", IE_Released, this, &ASmashBrosTestCharacter::StopAttack2);
			PlayerInputComponent->BindAction("Attack3", IE_Pressed, this, &ASmashBrosTestCharacter::StartAttack3);
			//PlayerInputComponent->BindAction("Attack3", IE_Released, this, &ASmashBrosTestCharacter::StopAttack3);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Player 2 has bound their controls"));
			// set up gameplay key bindings
			PlayerInputComponent->BindAction("JumpP2", IE_Pressed, this, &ACharacter::Jump);
			PlayerInputComponent->BindAction("JumpP2", IE_Released, this, &ACharacter::StopJumping);
			PlayerInputComponent->BindAxis("MoveRightP2", this, &ASmashBrosTestCharacter::MoveRight);

			PlayerInputComponent->BindAction("Attack1P2", IE_Pressed, this, &ASmashBrosTestCharacter::StartAttack1);
			//PlayerInputComponent->BindAction("Attack1P2", IE_Released, this, &ASmashBrosTestCharacter::StopAttack1);
			PlayerInputComponent->BindAction("Attack2P2", IE_Pressed, this, &ASmashBrosTestCharacter::StartAttack2);
			//PlayerInputComponent->BindAction("Attack2P2", IE_Released, this, &ASmashBrosTestCharacter::StopAttack2);
			PlayerInputComponent->BindAction("Attack3P2", IE_Pressed, this, &ASmashBrosTestCharacter::StartAttack3);
			//PlayerInputComponent->BindAction("Attack3P2", IE_Released, this, &ASmashBrosTestCharacter::StopAttack3);
		}

	}
	/*PlayerInputComponent->BindTouch(IE_Pressed, this, &ASmashBrosTestCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ASmashBrosTestCharacter::TouchStopped);*/
}

void ASmashBrosTestCharacter::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
}

void ASmashBrosTestCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void ASmashBrosTestCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}


//Damage dealings

void ASmashBrosTestCharacter::StartAttack1()
{
	UE_LOG(LogTemp, Warning, TEXT("We are using the first attack"));
	wasPunchUsed = true;
}

void ASmashBrosTestCharacter::StartAttack2()
{
	UE_LOG(LogTemp, Warning, TEXT("We are using the second attack"));
	TakeDamage(0.10f);
}

void ASmashBrosTestCharacter::StartAttack3()
{
	UE_LOG(LogTemp, Warning, TEXT("We are using the third attack"));
	TakeDamage(0.15f);
}

//Adding the Player 2 attacks and controls

void ASmashBrosTestCharacter::FunkyKeyboardAttack1()
{
	StartAttack1();
}

void ASmashBrosTestCharacter::FunkyKeyboardAttack2()
{
	StartAttack2();
}

void ASmashBrosTestCharacter::FunkyKeyboardAttack3()
{
	StartAttack3();
}

void ASmashBrosTestCharacter::FunkyKeyboardJump()
{
	Jump();
}

void ASmashBrosTestCharacter::FunkyKeyboardStopJumping()
{
	StopJumping();
}

void ASmashBrosTestCharacter::FunkyKeyboardMoveRight(float _value)
{
	MoveRight(_value);
}

void ASmashBrosTestCharacter::TakeDamage(float _damageAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("We are taking %f points damages"), _damageAmount);
	playerHealth -= _damageAmount;

	if (playerHealth < 0.00f)
	{
		playerHealth = 0.00f;
	}
}

