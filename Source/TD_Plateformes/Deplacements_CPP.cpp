// Fill out your copyright notice in the Description page of Project Settings.


#include "Deplacements_CPP.h"

// Sets default values
ADeplacements_CPP::ADeplacements_CPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ADeplacements_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeplacements_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



// Called to bind functionality to input
void ADeplacements_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAxis("MoveRight", this, &ADeplacements_CPP::MoveRight);
	InputComponent->BindAxis("MoveForward", this, &ADeplacements_CPP::MoveForward);

}

void ADeplacements_CPP::MoveRight(float AxisValue) {
	if (AxisValue) {
		AddMovementInput(this->GetActorRightVector(), AxisValue);
	}
}

void ADeplacements_CPP::MoveForward(float AxisValue) {
	if (AxisValue) {
		AddMovementInput(this->GetActorForwardVector(), AxisValue);
	}
}