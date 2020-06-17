//
//  main.c
//  Section2SelectionSort
//
//  Created by niwodiy on 2020/6/17.
//  Copyright © 2020 niwodiy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // SelectionSort&BubbleSort
    //选择排序的基本方法笔记
    /*假定有几个数据需要排序{0,9,6,8,2,4,7}，
     则每次从左到右依次选择一个数据和该数据右侧剩下的数据进行比较大小
     [基本方法]
     如果选择的数据比右侧剩下的数据小，则调换位置
     */
    int t[] = {0,9,6,8,2,4,7};
    int nNumber = sizeof(t)/sizeof(int);
    for(int i = 0; i < nNumber - 1; i++)
    {
        for (int j = i + 1; j < nNumber; j++) {
            if(t[i] > t[j])
            {
                ///Exchange data
                int temp;
                temp = t[j];
                t[j] = t[i];
                t[i] = temp;
//                for (int k = 0; k < nNumber; k++) {
//                    printf("%d ", t[k]);
//                }
//                printf("\n");
            }
        }
        for (int k = 0; k < nNumber; k++) {
            printf("%d ", t[k]);
        }
        printf("\n");
    }
    
    return 0;
}
