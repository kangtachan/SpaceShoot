// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine/DataTable.h"
#include "EnemyDataRow.generated.h"

/**
 * 
 */
USTRUCT()
struct SPACESHOOT_API FEnemyDataRow : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()
public:
    FEnemyDataRow();

    UPROPERTY(EditAnywhere)
    FText   Name;

    UPROPERTY(EditAnywhere)
    FString Describe;

    // ���Ѫ��
    UPROPERTY(EditAnywhere)
    int32   HPMax;

    // ������
    UPROPERTY(EditAnywhere)
    int32   Attack;

    // ������
    UPROPERTY(EditAnywhere)
    int32   Defence;

    // �ƶ��ٶ�
    UPROPERTY(EditAnywhere)
    float   MoveSpeed;

    // ����
    UPROPERTY(EditAnywhere)
    class UPaperFlipbook*     Animation;

    // ����ƫת�Ƕ�
    UPROPERTY(EditAnywhere)
    float   AmRotation;

    // ������ID
    UPROPERTY(EditAnywhere)
    int32   EmitterID;

    // AI��������
    UPROPERTY(EditAnywhere)
    TSubclassOf<class AAIController>    ControllerClass;
};
