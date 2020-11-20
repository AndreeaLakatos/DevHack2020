// Fill out your copyright notice in the Description page of Project Settings.


#include "Cup.h"
#include "Components/SphereComponent.h"
#include "GameModes/DevHack2020GameModeBase.h"

// Sets default values
ACup::ACup() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	cupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cup Mesh"));
	SetRootComponent(cupMesh);

	sphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision component"));
	sphereComponent->SetupAttachment(cupMesh);
}

void ACup::BeginPlay()
{
	Super::BeginPlay();

	sphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ACup::BeginOverlap);
}

void ACup::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherActor != this)
	{
		this->Destroy();
		OtherActor->Destroy();
		
		
		ADevHack2020GameModeBase* gameMode = Cast<ADevHack2020GameModeBase>(GetWorld()->GetAuthGameMode());
		if (gameMode) {
			gameMode->incrementScore(1);
		}
	}
}

