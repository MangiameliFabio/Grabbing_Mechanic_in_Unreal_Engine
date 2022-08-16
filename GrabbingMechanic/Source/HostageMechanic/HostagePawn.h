// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "HostagePawn.generated.h"

/**
 * 
 */
UCLASS()
class HOSTAGEMECHANIC_API AHostagePawn : public APawn
{
	GENERATED_BODY()

	AHostagePawn();

protected:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	USkeletalMeshComponent* Mesh;

public:
	USkeletalMeshComponent* GetMesh() const
	{
		return Mesh;
	}
};
	
