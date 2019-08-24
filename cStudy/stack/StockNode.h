//
//  StockNode.h
//  cStudy
//
//  Created by 吴亲强 on 2019/8/24.
//  Copyright © 2019 吴亲强. All rights reserved.
//

#ifndef StockNode_h
#define StockNode_h

#include <stdio.h>



#define StackSize 100
typedef char DataType;

typedef struct {
    DataType data[StackSize];
    int top;
}SeqStack;




//定义栈的链式结构
typedef struct stockNode{
    DataType data;
    struct stockNode * next;
} StockNode;

typedef StockNode * LinkStack;
LinkStack top;



#endif /* StockNode_h */
