// Copyright Epic Games, Inc. All Rights Reserved.

#include "HostageMechanicCharacter.h"

#include "DrawDebugHelpers.h"
#include "HostageMechanicProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "HostagePawn.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "StaticMeshAttributes.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "GameFramework/CharacterMovementComponent.h"

#define ENEMY_LINE_OF_SIGHT        ECC_GameTraceChannel2

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

AHostageMechanicCharacter::AHostageMechanicCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 60.f;
	BaseLookUpRate = 60.f;
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false); // otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(false); // otherwise won't be visible in the multiplayer
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));

	Health = 100;

	NormalMovementSpeed = 600;
	SlowedMovementSpeed = 50;
	GetCharacterMovement()->MaxWalkSpeed = NormalMovementSpeed;

	HostageIsGrabbed = false;

	//Aim locations for line trace from enemy
	AimLocationUpperArmL = CreateDefaultSubobject<USceneComponent>(TEXT("AimLocationUpperArmL"));
	AimLocationUpperArmL->SetupAttachment(GetMesh1P(), "AimLocationUpperArmL");

	AimLocationUpperArmR = CreateDefaultSubobject<USceneComponent>(TEXT("AimLocationUpperArmR"));
	AimLocationUpperArmR->SetupAttachment(GetMesh1P(), "AimLocationUpperArmR");

	AimLocationLowerArmL = CreateDefaultSubobject<USceneComponent>(TEXT("AimLocationLowerArmL"));
	AimLocationLowerArmL->SetupAttachment(GetMesh1P(), "AimLocationLowerArmL");

	AimLocationLowerArmR = CreateDefaultSubobject<USceneComponent>(TEXT("AimLocationLowerArmR"));
	AimLocationLowerArmR->SetupAttachment(GetMesh1P(), "AimLocationLowerArmR");

	AimLocationHandL = CreateDefaultSubobject<USceneComponent>(TEXT("AimLocationHandL"));
	AimLocationHandL->SetupAttachment(GetMesh1P(), "AimLocationHandL");

	AimLocationHandR = CreateDefaultSubobject<USceneComponent>(TEXT("AimLocationHandR"));
	AimLocationHandR->SetupAttachment(GetMesh1P(), "AimLocationHandR");

	AimLocationsArray.Add(AimLocationUpperArmL);
	AimLocationsArray.Add(AimLocationUpperArmR);
	AimLocationsArray.Add(AimLocationLowerArmL);
	AimLocationsArray.Add(AimLocationLowerArmR);
	AimLocationsArray.Add(AimLocationHandL);
	AimLocationsArray.Add(AimLocationHandR);
}

void AHostageMechanicCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true),
	                          TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AHostageMechanicCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AHostageMechanicCharacter::OnFire);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AHostageMechanicCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AHostageMechanicCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHostageMechanicCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &AHostageMechanicCharacter::Turn);
	PlayerInputComponent->BindAxis("TurnRate", this, &AHostageMechanicCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AHostageMechanicCharacter::LookUp);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AHostageMechanicCharacter::LookUpAtRate);

	// Toggle E to grab hostage
	PlayerInputComponent->BindAction("GrabHostage", IE_Pressed, this, &AHostageMechanicCharacter::GrabHostage);

	// Press O to restart the Level
	PlayerInputComponent->BindAction("Restart", IE_Pressed, this, &AHostageMechanicCharacter::RestartGame);
}

void AHostageMechanicCharacter::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			if (bUsingMotionControllers)
			{
				const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
				const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
				World->SpawnActor<AHostageMechanicProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
			}
			else
			{
				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr)
					                               ? FP_MuzzleLocation->GetComponentLocation()
					                               : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride =
					ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<AHostageMechanicProjectile>(ProjectileClass, SpawnLocation, SpawnRotation,
				                                              ActorSpawnParams);
			}
		}
	}

	// try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void AHostageMechanicCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AHostageMechanicCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AHostageMechanicCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

void AHostageMechanicCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AHostageMechanicCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AHostageMechanicCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AHostageMechanicCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AHostageMechanicCharacter::Turn(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AHostageMechanicCharacter::LookUp(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AHostageMechanicCharacter::RestartGame()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

bool AHostageMechanicCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AHostageMechanicCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AHostageMechanicCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AHostageMechanicCharacter::TouchUpdate);
		return true;
	}

	return false;
}

float AHostageMechanicCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,
                                            AController* EventInstigator, AActor* DamageCauser)
{
	Health = Health - DamageAmount;

	if (HostageIsGrabbed)
	{
		UE_LOG(LogTemp, Warning, TEXT("Release"))
		GrabHostage();
	}
	if (Health <= 0)
	{
		RestartGame();
	}

	return DamageAmount;
}

void AHostageMechanicCharacter::CameraShakeGrabbed()
{
	if (CamShakeClass)
	{
		GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(CamShakeClass);
	}
}

void AHostageMechanicCharacter::GrabHostage()
{
	//If Hostage is Grabbed, detach it and reset the location.
	if (HostageIsGrabbed)
	{
		FRotator NewRotation = FRotator(0, GrabbedHostage->GetActorRotation().Yaw, 0);
		GrabbedHostage->SetActorRotation(NewRotation);

		FHitResult OutHit;
		FVector Start = GrabbedHostage->GetRootComponent()->GetComponentLocation();

		FVector DownVector = GrabbedHostage->GetRootComponent()->GetUpVector();
		FVector End = ((DownVector * -1000) + Start);
		FCollisionQueryParams CollisionParams;

		GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, CollisionParams);

		GrabbedHostage->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		FVector NewPosition = FVector(OutHit.Location);

		GrabbedHostage->SetActorLocation(NewPosition);
		GrabbedHostage->GetMesh()->SetCollisionResponseToAllChannels(ECR_Block);
		GrabbedHostage->GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ENEMY_LINE_OF_SIGHT,
		                                                         ECollisionResponse::ECR_Ignore);

		GetCharacterMovement()->MaxWalkSpeed = NormalMovementSpeed;

		GetWorldTimerManager().ClearTimer(CameraShakeTimer);

		BaseTurnRate = 60.f;
		BaseLookUpRate = 60.f;

		Turn(1);
		LookUp(-1);

		HostageIsGrabbed = false;
	}
	//If Hostage is not Grabbed attach it to the player
	else
	{
		FHitResult OutHit;
		FVector Start = FP_Gun->GetComponentLocation();

		FVector ForwardVector = FirstPersonCameraComponent->GetForwardVector();
		FVector End = ((ForwardVector * 200) + Start);
		FCollisionQueryParams CollisionParams;

		if (GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Camera, CollisionParams))
		{
			GrabbedHostage = Cast<AHostagePawn>(OutHit.GetActor());

			if (GrabbedHostage && !HostageIsGrabbed)
			{
				HostageIsGrabbed = true;

				GrabbedHostage->GetMesh()->SetCollisionResponseToAllChannels(ECR_Ignore);
				GrabbedHostage->GetMesh()->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
				GrabbedHostage->AttachToComponent(Mesh1P, FAttachmentTransformRules::SnapToTargetIncludingScale,
				                                  "GrabSocket");

				GetCharacterMovement()->MaxWalkSpeed = SlowedMovementSpeed;

				BaseTurnRate = 10.f;
				BaseLookUpRate = 10.f;

				Turn(1);
				LookUp(-1);

				GetWorldTimerManager().SetTimer(
					CameraShakeTimer, this, &AHostageMechanicCharacter::CameraShakeGrabbed, 0.25, true);
			}
		}
	}
}
