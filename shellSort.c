
/*
////////////////////////////////////////////////////////
程序功能说明：
    文件名字：shellSort.c
    功能：希尔排序
////////////////////////////////////////////////////////
程序维护记录
    @author:菜鸟网
    @version 1.0
    @date 2021/4/6
    @note 首次创建
*/
#include <stdio.h>
int arr[] = {22, 34, 3, -32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70}; //任意一串整数
//////////////////////////////////////////////////////////////////////////////////
//函数声明
//希尔排序
void shell_sort(int arr[] ,int len);
//////////////////////////////////////////////////////////////////////////////////
//程序主体
int main()
{
    int len;//len为数组的元素个数
    len = sizeof(arr) / sizeof(arr[0]);
    //    printf("%d\n", len);
    shell_sort(arr, len);
    for (int m = 0; m < len; m++)//每次寻找倒数第m+1个最小数，并输出
    {
        printf("%d ", arr[m]);
    }
}
///////////////////////////////////////////////////////////////////////////////////
void shell_sort(int arr[], int len)
{
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1)//利用位运算使得gap逐步缩小
    {
//        printf("(gap = %d )",gap);
        for (i = gap; i < len; i++)
        {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
            {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }
}