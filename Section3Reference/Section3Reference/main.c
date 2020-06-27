//
//  main.c
//  Section3Reference
//
//  Created by niwodiy on 2020/6/27.
//  Copyright © 2020 niwodiy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    ///实例1引用
    int arr[3][4];
    printf("arr =       %p\n", arr);
    printf("&arr =      %p\n", &arr);       ///这里引用了一级指针
    
    printf("arr[0] =    %p\n", arr[0]);
    printf("&arr[0] =   %p\n", &arr[0]);    ///这里引用了二级指针
    
    /*
     ///The results are consistent
     说明：四次输出结果一致，但是&通常是取地址运算符。
     &  reference   *   dereference
     
     arr =       0x7ffeefbff4e0
     &arr =      0x7ffeefbff4e0
     arr[0] =    0x7ffeefbff4e0
     &arr[0] =   0x7ffeefbff4e0
     */
    
    ///实例2步长
    printf("arr =   %p  arr + 1 =   %p\n", arr, arr + 1);
    printf("arr[0] =%p  arr[0] + 1 =%p\n", arr[0], arr[0] + 1);
    
    /*
     ///这里怎么理解引用和解引用
     首先二维数组是一个二级指针？
     这里的arr是一级指针，它的步进是每次一行跳转
     而arr[0]是二级指针，它的步进是每次一个数据（sizeof(int)）跳转
     arr =   0x7ffeefbff4e0  arr + 1 =   0x7ffeefbff4f0
     arr[0] =0x7ffeefbff4e0  arr[0] + 1 =0x7ffeefbff4e4
     */
    
    ///实例3引用和解引用
    printf("arr =       %p\n", arr);
    printf("arr + 1 =   %p\n", arr + 1);
    
    printf("*arr =      %p\n", *arr);
    printf("*arr+1 =    %p\n", *arr + 1);
    
    printf("&arr[0] =   %p\n", &arr[0]);
    printf("&arr[0]+1 = %p\n", &arr[0] + 1);
    
    /*
     ///这里怎么理解引用和解引用的关系
     对于一个二维数组arr[3][4]
     对于二级指针arr[0]进行引用(&arr[0])—>就变成了一个一级指针arr
     对于一个一级指针arr进行解引用(*arr)->就变成了一个二级指针arr[0]
     arr =       0x7ffeefbff4e0
     arr + 1 =   0x7ffeefbff4f0
     *arr =      0x7ffeefbff4e0
     *arr+1 =    0x7ffeefbff4e4
     &arr[0] =   0x7ffeefbff4e0
     &arr[0]+1 = 0x7ffeefbff4f0
     */
    
    ///实例4引用和解引用实际应用，快速定位到二维数组中的某个元素
    int arr2[3][4] = {
        {1,3,5,7},
        {2,4,6,8},
        {3,6,9,5}
    };
    printf("arr2 =      %p\n", arr2);
    printf("arr2+1 =    %p\n", arr2 + 1);
    printf("*(arr2+1)=  %p\n", *(arr2 + 1));
    printf("*(arr2+1)+2=%p\n", *(arr2 + 1) + 2);
    printf("%d\n", *(*(arr2 + 1) + 2));  //快速定位到第一行的第二个元素(从0行0列开始)
    /*
     arr2 =      0x7ffeefbff4b0
     arr2+1 =    0x7ffeefbff4c0
     *(arr2+1)=  0x7ffeefbff4c0
     *(arr2+1)+2=0x7ffeefbff4c8
     
     重点：
     arr2+1             //这个比较好理解，就是将一级行指针跳转一个单位=Addr+sizeof(int)*4
     *(arr2+1)          //这里对一级指针进行解引用变成二级指针arr2[1]
     *(arr2 + 1) + 2)   //二级指针再偏移两个单位地址变成&arr2[1][2]，然后取内容6
     
     
     */
    
    return 0;
}
