// Copyright Epic Games, Inc. All Rights Reserved.

#include "HostageMechanicProjectile.h"

#include "EnemyCharacter.h"
#include "HostageMechanicCharacter.h"
#include "Chaos/GeometryParticlesfwd.h"
#include "Components/AudioComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

AHostageMechanicProjectile::AHostageMechanicProjectile() 
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AHostageMechanicProjectile::OnHit);		// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	ParticleEffect = CreateDefaultSubobject<UParticleSystem>(TEXT("Hit Particle Effekt"));

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;

	//Projectile Damage
	Damage = 20;
}

void AHostageMechanicProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
		const FVector WorldLocationProjectile = RootComponent->GetComponentLocation();
	
	if (OtherActor && OtherActor->CanBeDamaged() && !OtherActor->IsPendingKill())
	{
		TSubclassOf<UDamageType> DmgTypeClass = UDamageType::StaticClass();
		OtherActor->TakeDamage(Damage, FDamageEvent(DmgTypeClass), DamageInstigator, this);	
	}
	
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleEffect, WorldLocationProjectile);
	
	Destroy();
}