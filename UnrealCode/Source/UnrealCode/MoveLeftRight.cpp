// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveLeftRight.h"
#include "Switch.h"

// Sets default values
AMoveLeftRight::AMoveLeftRight():m_LocX(0), m_IsMoveRight(true), m_IsPlay(false)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// CreateDefaultSubobject : new Ű����� ���� '�𸮾�'���� �������� ��ü�� �����ϴ� Ű����
	// TEXT : '�𸮾�'���� ����ϴ� �ؽ�Ʈ ������ �� �ϳ� 
	// <USceneComponent>(TEXT("SceneRootRoot")) : USceneComponent ��ü�� "SceneRootRoot"��� �̸����� �������� ����
	// <UStaticMeshComponent>(TEXT("mymyMesh")) : UStaticMeshComponent ��ü�� "mymyMesh"��� �̸����� �������� ����
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootRoot"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mymyMesh"));

	SetRootComponent(Scene); // Scene�� RootComponent�� �ø��ڴ�. = RootComponent = Scene;

	// AttachToComponent : Component�� ���̴� ��� 
	// Scene�� ���δ�. -> ���� ��ǥ���� Scene ���ؿ� Relative(�����) ��ǥ������ ���� ( ���� ���� 100, 100 �� Scene ������Ʈ ���� 100, 100�� ��ġ�� �̵� )
	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);
	//StaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	// -> RootComponent�� ���δ�. -> ���� ��ǥ���� Rootcomponent ���ؿ� Relative(�����) ��ǥ������ ���� ( ���� ���� 100, 100 �� Scene ������Ʈ ���� 100, 100�� ��ġ�� �̵� )

	// UAsset ��������
	// ConstructorHelpers::FObjectFinder : ������Ʈ ������ ã�´�.
	// <UStaticMesh> : ã�� ���� Ÿ��(����)
	// sm : ã�Ƽ� ���� ��ü �̸�
	// -> ȿ������ ����� �ƴϴ�. �׳� �̷� ����� �ִ� 
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> sm(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Props/SM_Chair.SM_Chair'"));

	//if (sm.Succeeded()) // ���� �ҷ����� ���� ���� üũ
	//{
	//	StaticMesh->SetStaticMesh(sm.Object); // StaticMeshComponent�� StaticMesh ����
	//}

}

AMoveLeftRight::~AMoveLeftRight()
{
}

// Called when the game starts or when spawned
void AMoveLeftRight::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(m_Switch))
		m_Switch->FDele_EventOverlap.AddDynamic(this, &AMoveLeftRight::EventOverlap);
	
}

// Called every frame
void AMoveLeftRight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); // �������̵�(���)�� �Լ��� ��� �θ� �Լ��� �����Ѵ�.

	
	if (m_IsPlay == false)
		return;
	

	if (m_IsMoveRight == true)
	{
		m_LocX += 1;
		if (m_LocX >= 200)
		{
			m_IsMoveRight = false;
		}
	}
	else 
	{
		m_LocX -= 1;
		if (m_LocX <= 0)
		{
			m_IsMoveRight = true;
		}
	}
	
	// SetRelativeLocation : ������� ��ġ���� �����Ѵ�.
	// FVector : �𸮾󿡼� ����ϴ� 3���� ��ǥ ����
	StaticMesh->SetRelativeLocation(FVector(m_LocX,0,0));

}
void AMoveLeftRight::EventOverlap(bool isBegin)
{
	m_IsPlay = isBegin;
}


void AMoveLeftRight::Code_DoPlay_Implementation(bool IsPlay)
{
	m_IsPlay = IsPlay;
}

