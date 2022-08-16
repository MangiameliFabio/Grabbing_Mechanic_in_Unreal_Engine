// Fill out your copyright notice in the Description page of Project Settings.


#include "HostagePawn.h"

AHostagePawn::AHostagePawn()
{
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
}
