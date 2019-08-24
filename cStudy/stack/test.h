//
//  test.h
//  cStudy
//
//  Created by 吴亲强 on 2019/8/24.
//  Copyright © 2019 吴亲强. All rights reserved.
//

#ifndef test_h
#define test_h

#include <stdio.h>
//定义栈空间大小
#define StackSize 100
typedef char DataType;
typedef struct {
    DataType data[StackSize];
    int top;
}SeqStack;


void exit(int status);

#endif /* test_h */
