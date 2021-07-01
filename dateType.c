#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("void的大小是：%lu\n",sizeof(void));
    printf("char的大小是：%lu\n", sizeof(char));
    printf("unsigned char的大小是：%lu\n", sizeof(unsigned char));
    printf("short的大小是：%lu\n", sizeof(short));
    printf("int的大小是：%lu\n", sizeof(int));
    printf("long的大小是：%lu\n", sizeof(long));
    printf("float的大小是：%lu\n", sizeof(float));
    printf("long int的大小是：%lu\n", sizeof(long int));
    printf("double的大小是：%lu\n", sizeof(double));
    printf("long long的大小是：%lu\n", sizeof(long long));
    printf("float的上限是：%E\n",FLT_MAX);
    printf("float的下限是：%E\n",FLT_MIN);
    printf("float的精度是：%lu\n",FLT_DIG);
    return 0;
}