//
//  queue.h
//  cStudy
//
//  Created by 吴亲强 on 2019/8/25.
//  Copyright © 2019 吴亲强. All rights reserved.
//循环队列的顺序存储   数据结构

#ifndef queue_h
#define queue_h

#define QueueSize 100
#include <stdio.h>
typedef char DataType;
typedef struct {
    DataType data[QueueSize];
    int front,rear;
}CirQueue;

//初始化队列
void InitQueue(CirQueue * Q){
    Q->front=Q->rear=0;
}

//判断队列是否为空
int QueueEmpty(CirQueue * Q)
{
    return Q->rear==Q->front;
}

//判断队列是否满
int QueueFull(CirQueue * Q)
{
    return (Q->rear+1) % QueueSize == Q->front ;
}

//取队列元素
int QueueTop(CirQueue * Q)
{
    if(QueueEmpty(Q)){
        printf("that empty");
        exit(0);
    }else{
        return Q->data[Q->front];
    }
}

//入队
void EnQueue(CirQueue * Q ,DataType x){
    if(QueueFull(Q)){
        printf("that Queue is full");
        exit(0);
    }else{
        Q->data[Q->rear]=x;
        Q->rear=(Q->rear+1)%QueueSize;
    }
}


//出队列
DataType DeQueue(CirQueue * Q)
{
    DataType x;
    if(QueueEmpty(Q)){
        printf("that Queue is empty");
        exit(0);
    }else{
        x=Q->data[Q->front];
        Q->front=(Q->front+1) % QueueSize;
        return x;
    }
}





#endif /* queue_h */
