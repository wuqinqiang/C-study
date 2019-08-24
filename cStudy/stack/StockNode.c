//
//  StockNode.c
//  cStudy
//
//  Created by 吴亲强 on 2019/8/24.
//  Copyright © 2019 吴亲强. All rights reserved.


//   栈的链式存储结构

#include "StockNode.h"

void free(){
    
}

int StockEmpty(LinkStack list){
    return list == NULL;
}

LinkStack Push(LinkStack top,DataType x){
    StockNode * p;
    p=(StockNode *)malloc(sizeof(StockNode));
    p->data=x;
    p->next=top;
    top=p;
    return top;
}

LinkStack Pop(LinkStack top){
    StockNode * p=top;

    if(StockEmpty(top)){
        printf("stock is empty");
        exit(0);
    }else{
        top=p->next;
        free(p);
        return top;

    }

}


DataType getTopData(LinkStack top){
    if(StockEmpty(top)){
        printf("stock is empty");
        exit(0);
    }else{
        return top->data;
    }
}

void main()
{
}
