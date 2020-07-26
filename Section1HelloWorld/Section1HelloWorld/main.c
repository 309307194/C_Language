//  Three ways to demonstrate annotations using HelloWorld

//  main.c
//  Section1HelloWorld
//
//  Created by niwodiy on 2020/6/17.
//  Copyright © 2020 niwodiy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 方法一 这里使用的是单行注释
    // insert code here...
    printf("Hello, World!\n");
    
    /*
     方法二
     这里演示的是多行注释，注意多行注释不能内部嵌套多行注释。
     printf("多行注释1\n");
     printf("多行注释2\n");
     */
    
#if 0
    方法三
    这里演示的是条件编译，#if后面如果跟的是0则不参加编译
    如果需要参加编译则需要把0改为1
#endif
    
#if 1
    printf("这里演示参加编译\n");
#endif
    
    
    return 0;
}
