// Copyright Kat Code Labs SRL. All Rights Reserved.


#include "PlayerPawn.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
    BallRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Ball Socket"));
    SetRootComponent(BallRootComponent);

    CameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Spring Arm"));
    CameraSpringArm->SetupAttachment(BallRootComponent);

    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
    CameraComponent->SetupAttachment(CameraSpringArm);
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
    CachedPlayerController = GetWorld() ? GetWorld()->GetFirstPlayerController() : nullptr;
    if (CachedPlayerController)
    {
        CachedPlayerController->bShowMouseCursor = true;
    }
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

