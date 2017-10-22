//
//  arthmetic3.c
//  iRonArithmetic
//
//  Created by iRonCheng on 2017/10/22.
//  Copyright © 2017年 iRonCheng. All rights reserved.
//
//
//
/*      模拟栈操作       */

#include "arthmetic3.h"

#include <assert.h>
#include <stdbool.h>

//栈最多能保存1024个数据
static int data[1024];

//目前已经放了多少个数(相当于栈顶位置)
static int count = 0;


#pragma mark - Implement Method

/* 查询栈满 full */
bool isFull () {
    
    if (count >= 1024) {
        return true;
    }
    
    return false;
}

//查询栈空 empty
bool isEmpty() {
    if(count <= 0) {
        return true;
    }
    return false;
}

#pragma mark - Method

//数据入栈 push
void push(int x){
    
    //防止数组越界
    assert(!isFull());
    data[count++] = x;
}

//数据出栈 pop
int pop(){
    assert(!isEmpty());
    return data[--count];
    
}

//查看栈顶元素 top
int top(){
    assert(!isEmpty());
    return data[count-1];
}


int main () {
    //入栈
    for (int i = 1; i <= 10; i++) {
        push(i);
    }
    
    //出栈
    while(!isEmpty()){
        printf("%d ", top()); //栈顶元素
        pop(); //出栈
    }
    
    printf(" ");
    
    return 0;
}

