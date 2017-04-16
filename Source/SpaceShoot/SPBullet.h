// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SPEntity.h"
#include "SPMotionInfo.h"
#include "SPBullet.generated.h"

class USPBulletEvent;

/**
 * 
 */
UCLASS()
class SPACESHOOT_API ASPBullet : public ASPEntity
{
	GENERATED_BODY()
public:
    ASPBullet();

    virtual void BeginPlay() override;
    
    virtual void Tick(float Elapse) override;
	
    virtual void NotifyActorBeginOverlap(AActor* Other) override;

    UFUNCTION(BlueprintCallable, Category = "Bullet")
    void AddBulletEvent(USPBulletEvent *E);

    UFUNCTION(BlueprintCallable, Category = "Bullet")
    void RemoveBulletEvent(USPBulletEvent *E);

public:
    // ��������
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float       LifeTime;

    // �Ѿ��˶�����ʱ�䡣
    UPROPERTY(BlueprintReadOnly)
    float       Elapse;

    // ���������������˳������
    UPROPERTY(BlueprintReadOnly)
    int32       Index;

    UPROPERTY(BlueprintReadWrite)
    FSPMotionInfo   MotionInfo;

protected:

    UPROPERTY()
    TArray<USPBulletEvent*> Events;
};
