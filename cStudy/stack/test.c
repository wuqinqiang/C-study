//
//  test.c
//  cStudy
//
//  Created by 吴亲强 on 2019/8/24.
//  Copyright © 2019 吴亲强. All rights reserved.
//

#include "test.h"



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

//圆括号匹配检验
 int Expr(){
     SeqStack Y;
     int i ;
     SeqStack X;
     InitStock(&X);
     InitStock(&Y);
     Push(&Y,'(');
     Push(&Y,'(');
     Push(&Y,')');
     Push(&Y,')');
     // Push(&Y, ')');
     
     for(i=0;i<5;i++){
         if(Y.data[i] == '('){
             Push(&X, '(');
         }else if(Y.data[i]==')'){
             if(StockEmpty(&X)){
                 return 0;
             }else{
                 Pop(&X);
             }
         }
     }
     if(StockEmpty(&X)) return 1;
     else return 0;
}

//字符串回文的判断
int symmetry(char str[]){
    SeqStack S;
    int j,k,i=0;
    InitStock(&S);
    while(str[i] !='\0') i++;
    
    for(j=0;j<i/2;j++){
        Push(&S, str[j]);
    }
    
    k=(i+1)/2;
    for (j=k;j<i ;j++) {
        if(str[j] !=Pop(&S)) return 0;
    }
    return 1;
}

//数制转换
//int n z输入的数值
//int d 转换数制
void conversion(int n,int d){
    int i;
    SeqStack S;
    InitStock(&S);
    while(n){
        Push(&S,n%d);
        n=n/d;
    }
    while (!StockEmpty(&S)) {
        i =Pop(&S);
        printf("%d",i);
    }
    printf("\n");
}

//栈和递归

//阶乘问题

long int fact(long int n){
    int temp;
    if(n==1){
        return 1;
    }else{
        temp=n*fact(n-1);
    }
rl2:return temp;
    
}




int main(int argc, const char * argv[]) {
      int a;
    
//     a= Expr();
//    printf("%d\n",a);
    
     char str[10]="abcbac";
   a= symmetry(str);
    printf("%d\n",a);
    
//    a=3553;
//    conversion(a,8);
    
//     int n;
//    n=5;
//    a=fact(n);
//rl1:printf("5 !=%1d",a);
//    printf("\n");
    
    
}


