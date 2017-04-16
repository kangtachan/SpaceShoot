// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SPEntity.h"
#include "SPCombat.generated.h"

class ASPLevelActor;
class USPBulletEmitter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEntityMoveFinishedDelegate);

/**
 * 
 */
UCLASS()
class SPACESHOOT_API ASPCombat : public ASPEntity
{
	GENERATED_BODY()
public:
    ASPCombat();

    void Tick(float Elapse) override;

    UFUNCTION(BlueprintCallable, Category = "Enemy")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "Enemy")
    void StopFire();

    // �л�������
    UFUNCTION(BlueprintCallable, Category = "Enemy")
    void SwitchEmitter(int32 EmitterID);

    // ִ���ƶ���Ŀ���
    UFUNCTION(BlueprintCallable, Category = "Enemy")
    void MoveToDirect(const FVector &Destination);

    // �ƶ������ص�
    UPROPERTY(BlueprintAssignable)
    FEntityMoveFinishedDelegate OnMoveToFinished;

protected:
    void TickMove(float Elapse);

    // �ƶ�·��
    TArray<FVector> Path;

    // ·������
    int32           PathIndex;

    // �Ѿ��ƶ���ʱ��
    float           MoveElapse;

    // ������
    UPROPERTY()
    USPBulletEmitter*   Emitter;

    // �Ƿ����ڿ�����
    bool            bFiring;
};
