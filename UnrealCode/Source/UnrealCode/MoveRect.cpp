// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveRect.h"
#include "Switch.h"

// Sets default values
AMoveRect::AMoveRect() : m_LocX(0), m_LocZ(0), m_IsPlay(false)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootalpha"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlusUpDown"));

	SetRootComponent(Scene);

	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AMoveRect::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(m_Switch))
		m_Switch->FDele_EventOverlap.AddDynamic(this, &AMoveRect::EventOverlap);
	
}

// Called every frame
void AMoveRect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_IsPlay == false)
		return;

	switch (m_MoveType)
	{
	case EN_MoveTypeCode::MoveRight:
	{
		m_LocX += 1;
		if (m_LocX >= 200)
		{
			m_MoveType = EN_MoveTypeCode::MoveUp;
		}
	}
	break;
	case EN_MoveTypeCode::MoveUp:
	{
		m_LocZ += 1;
		if (m_LocZ >= 200)
		{
			m_MoveType = EN_MoveTypeCode::MoveLeft;
		}
	}
	break;
	case EN_MoveTypeCode::MoveLeft:
	{
		m_LocX -= 1;
		if (m_LocX <= 0)
		{
			m_MoveType = EN_MoveTypeCode::MoveDown;
		}
	}
	break;
	case EN_MoveTypeCode::MoveDown:
	{
		m_LocZ -= 1;
		if (m_LocZ <= 0)
		{
			m_MoveType = EN_MoveTypeCode::MoveRight;
		}
	}
	break;
	}
	StaticMesh->SetRelativeLocation(FVector(m_LocX, 0, m_LocZ));

}

void AMoveRect::EventOverlap(bool isBegin)
{
	m_IsPlay = isBegin;
}


void AMoveRect::Code_DoPlay_Implementation(bool IsPlay)
{
	m_IsPlay = IsPlay;
}

