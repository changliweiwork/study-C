#include <stdio.h>
int x,y;
int sum()
{
    extern int x;
    extern int y;
    int c;
    x = 1;
    y = 2;
    c = x + y;
    return c;
}
void mian()
{
    int sumxy = sum();
    printf("x + y = %d\n",sumxy);
}
