//
//  stock.c
//  cStudy
//
//  Created by 吴亲强 on 2019/8/25.
//  Copyright © 2019 吴亲强. All rights reserved.
//

#include <stdio.h>
#define StackSize 100
typedef char DataType;
typedef struct {
    DataType data[StackSize];
    int top;
}SeqStack;


void InitStock(SeqStack *q){
    q->top=-1;
}

int StockEmpty(SeqStack *q){
    return q->top ==-1;
}

int StockFull(SeqStack *q){
    return q->top == StackSize-1;
}

//入栈
void Push(SeqStack * S,DataType x)
{
    if(StockFull(S)){
        printf("this stack is full");
    }else{
        S->top +=1;
        S->data[S->top]=x;
    }
    
}

//出栈
int Pop(SeqStack *S){
    if(StockEmpty(S)){
        printf("that no value");
        exit(0);
    }else{
        return S->data[S->top--];
    }
}



void exit(int status);
