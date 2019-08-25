//
//  queue.c
//  cStudy
//
//  Created by 吴亲强 on 2019/8/25.
//  Copyright © 2019 吴亲强. All rights reserved.
//

#include "queue.h"
#include "stock.h"
//题目
//设栈s=（1，2，3，4，5，6，7),其中7是栈顶元素，请写出调用函数Algo（s）后的栈状态

void Algo(SeqStack S)
{
    int i=1;
    CirQueue Q; SeqStack T;
    InitQueue(&Q);
    InitStock(&T);
    while (!StockEmpty(&S)) {
        if(i % 2==0){
            EnQueue(&Q,Pop(&S));
        }else{
            Push(&T, Pop(&S));
        }
        i++;
    }
    
    while (!QueueEmpty(&Q)) {
        Push(&S,DeQueue(&Q) );
    }
    while (!StockEmpty(&T)) {
        Push(&S, Pop(&T));
    }
    
    while (!StockEmpty(&S)) {
        printf("%d",Pop(&S));
    }
    printf("\n");
}

int main()
{
    
    SeqStack Q;
    InitStock(&Q);
    Push(&Q,1);
    Push(&Q,2);
    Push(&Q,3);
    Push(&Q,4);
    Push(&Q,5);
    Push(&Q,6);
    Push(&Q,7);
    //printf(&Q);
    Algo(Q);

}
