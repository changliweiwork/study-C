/*
费波纳奇数列：1 1 2 3 5 8
*/
#include <stdio.h>
int z = 0;
int a = 5;
int fibo(int m,int n)
{
    if (a>0)
    {
        z = m;
        m = n;
        n = n + z;
        printf("%d ",n);
        a--;
        fibo(m,n);
        return m;
    }
    else 
    {
        return 0;
    }
}
void mian()
{
    fibo(1,1);
}
