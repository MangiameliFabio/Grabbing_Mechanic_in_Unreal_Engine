// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"

#include "HostageMechanicProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

AEnemyCharacter::AEnemyCharacter()
{
	Rifle = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Rifle"));
	Rifle->SetupAttachment(GetMesh(),TEXT("Weapon Socket"));

	Muzzle = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle"));
	Muzzle->SetupAttachment(Rifle, TEXT("MuzzleFlash"));

	Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
		
	Health = 100;
	Awareness = 0;
	SightRadius = 2000;
	IsDead = false;
}

void AEnemyCharacter::Shoot(AHostageMechanicCharacter* Player)
{
	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(Muzzle->GetComponentLocation(), Player->GetRootComponent()->GetComponentLocation());
			
			const FVector SpawnLocation = Muzzle != nullptr ? Muzzle->GetComponentLocation() : GetActorLocation();

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

			// spawn the projectile at the muzzle
			World->SpawnActor<AHostageMechanicProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
		}
	}
}

void AEnemyCharacter::DestroyCharacter()
{
	Destroy();
}

float AEnemyCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{
	Health = Health - DamageAmount;
	if(Health <= 0)
	{
		IsDead = true;
		SetActorEnableCollision(false);

		Widget->DestroyComponent();
		
		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &AEnemyCharacter::DestroyCharacter, 5, false);
	}
	return DamageAmount;
}


