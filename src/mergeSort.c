/*
////////////////////////////////////////////////////////
程序功能说明：
    文件名字：shellSort.c
    功能：迭代排序，并归排序
////////////////////////////////////////////////////////
程序维护记录
    @author:菜鸟网
    @version 1.0
    @date 2021/4/6
    @note 首次创建
*/
#include <stdio.h>
#include <stdlib.h>
int arr[] = {22, 34, 3, -32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70}; //任意一串整数
//////////////////////////////////////////////////////////////////////////////////
//函数声明
//迭代排序
void merge_sort(int arr[] ,int len);
///////////////////////////////////////////////////////////////
//最小值函数
int min(int x,int y);
///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//程序主体
int main()
{
    int len;//len为数组的元素个数
    len = sizeof(arr) / sizeof(arr[0]);
    //    printf("%d\n", len);
    merge_sort(arr, len);
    for (int m = 0; m < len; m++)//每次寻找倒数第m+1个最小数，并输出
    {
        printf("%d ", arr[m]);
    }
}
///////////////////////////////////////////////////////////////////////////////////
int min(int x, int y)
{
    return x < y ? x : y;
}
///////////////////////////////////////////////////////////////////////////////////
void merge_sort(int arr[], int len)
{
    int *a = arr;
    int *b = (int *)malloc(len * sizeof(int));
    int seg, start;
    for (seg = 1; seg < len; seg += seg)
    {
        for (start = 0; start < len; start += seg + seg)
        {
            int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
            int k = low;
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            while (start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        int *temp = a;
        a = b;
        b = temp;
    }
    if (a != arr)
    {
        int i;
        for (i = 0; i < len; i++)
            b[i] = a[i];
        b = a;
    }
    free(b);
}