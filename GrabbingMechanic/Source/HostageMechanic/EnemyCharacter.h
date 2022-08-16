#pragma once

#include "CoreMinimal.h"
#include "HostageMechanicCharacter.h"
#include "Components/WidgetComponent.h"

#include "EnemyCharacter.generated.h"

UCLASS()
class HOSTAGEMECHANIC_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

	public:
	// Sets default values for this character's properties
	AEnemyCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	float Awareness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	float SightRadius;

	UPROPERTY(BlueprintReadOnly)
	bool IsDead;
	
	protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Properties)
	USkeletalMeshComponent* Rifle;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Propeties)
	USceneComponent* Muzzle;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Propeties)
	UWidgetComponent* Widget;

	/** Projectile class to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	TSubclassOf<class AHostageMechanicProjectile> ProjectileClass;	

	public:
	// Handle shooting of the AI
	UFUNCTION(BlueprintCallable)
	void Shoot(AHostageMechanicCharacter* Player);

	private:

	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	void DestroyCharacter();
};
