//
//  linkQueue.h
//  cStudy
//
//  Created by 吴亲强 on 2019/8/25.
//  Copyright © 2019 吴亲强. All rights reserved.
//链队列

#ifndef linkQueue_h
#define linkQueue_h

#include <stdio.h>
typedef char DataType;
typedef struct qnode{
    char data;
    struct qnode * next;
} QueueNode;

typedef struct {
    QueueNode * front;
    QueueNode * rear;
} LinkQueue;

void initQueue(LinkQueue * Q)
{

    Q->front=(QueueNode * )malloc(sizeof(QueueNode));
    Q->rear=Q->front;
    Q->rear->next=NULL;
}

int QueueEmpty(LinkQueue * Q)
{
    return Q->rear==Q->front;
}

//入队
void EnQueue(LinkQueue * Q ,DataType x)
{
    QueueNode * p =(QueueNode *)malloc(sizeof(QueueNode));
    p->data=x;
    p->next=NULL;
    Q->rear->next=p;
    Q->rear=p;
}

//获取队头元素
DataType GetFront(LinkQueue * Q)
{
    if(QueueEmpty(Q)){
        printf("this LinkQueue is empty");
        exit(0);
    }else{
        return Q->front->next->data;
    }
}

//出队
DataType DeQueue(LinkQueue * Q)
{
    QueueNode * p;
    if(QueueEmpty(Q)){
        printf("this LinkQueue is Empty");
        exit(0);
    }else{
        p=Q->front;
        Q->front=Q->front->next;
        return (Q->front->data);
    }
}



#endif /* linkQueue_h */
