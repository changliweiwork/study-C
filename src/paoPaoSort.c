/*
冒泡排序方式，按照从下到大输出原数组
*/
#include <stdio.h>
int arr[] = {22, 34, 3, -32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};//任意一串整数
int main()
{
    int temp;
    for (int j = 0; arr[j + 1] != NULL; j++)//循环数组元素数-1次，后一位是NULL停止
    {
        for (int i = 0; arr[i + 1] != NULL; i++)//再次循环数组元素数-1次
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                continue;
            }
            else
            {
                continue;
            }
        }
    }

    for (int i = 0; arr[i] != NULL; i++)
    {
        printf("%d ", arr[i]);
    }
}