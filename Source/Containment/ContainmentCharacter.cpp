// Fill out your copyright notice in the Description page of Project Settings.


#include "ContainmentCharacter.h"

// Sets default values
AContainmentCharacter::AContainmentCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AContainmentCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AContainmentCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AContainmentCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

