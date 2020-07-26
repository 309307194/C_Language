//  linux C basic use terminal.app
//  Using the command GCC main. C will generate a.out

//  main.c
//  Section0LinuxCLanguageBasic
//
//  Created by 123456 on 2020/7/26.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    printf("Hello, World!\n");
    return 0;
}

//IDE 引入了一个概念，叫工程
//在Linux下演示一个工程从源文件到

// 第一阶段
// gcc -E main.c -o main.i
// 这个阶段叫预处理,把#include <stdio.h>做了一次展开

// 第二阶段
// gcc -S main.i -o main.s
// 这个阶段叫编译，把源代码转换为汇编代码

// 第三阶段
// gcc -c main.s -o main.o
// 这个阶段叫汇编，把编译成的汇编代码转换为二进制代码

// 第四阶段
// gcc -main.o -o hello
// 这个阶段叫链接，把二进制转换为可执行文件
