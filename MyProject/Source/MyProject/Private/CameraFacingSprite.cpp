// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraFacingSprite.h"
#include "Kismet/GameplayStatics.h" // For getting player camera
#include "PaperSpriteComponent.h"

ACameraFacingSprite::ACameraFacingSprite()
{
    PrimaryActorTick.bCanEverTick = true;

    // Initialize the sprite component
    SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SpriteComponent"));
    RootComponent = SpriteComponent;
}

void ACameraFacingSprite::BeginPlay()
{
    Super::BeginPlay();
}

void ACameraFacingSprite::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Get the player camera
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PlayerController && PlayerController->PlayerCameraManager)
    {
        FVector CameraLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
        FVector DirectionToCamera = CameraLocation - GetActorLocation();
        FRotator NewRotation = DirectionToCamera.Rotation();
        
        // Set the sprite rotation to always face the camera
        SetActorRotation(NewRotation);
    }
}
