/*
一个大的浮点数加上很小的浮点数误差会比较大
中间加一个大小适当的中间值过度可以减小误差
*/
#include <stdio.h>
/////////////////////////////////////////////////////
//函数声明
//正常一个大浮点数加10000次小浮点数
float addNormal(float x, float y);
//小浮点数先加在中间值1上，再加上大浮点数，再减去1
float addChange(float x, float y);
/////////////////////////////////////////////////////
//主函数
int main()
{
    float a = 0.0001;
    float b = 100, an,ac;
    an = addNormal(a, b);
    ac = addChange(a, b);
    printf("an=%.20f\n", an);
    printf("ac=%.20f\n", ac);
    printf("a=%.20f\n", a);
}
//////////////////////////////////////////////////////
//函数定义
//正常一个大浮点数加10000次小浮点数
float addNormal(float x, float y)
{
    for (int i = 0; i < 10000; i++)
    {
        y += x;
    }
    return y;
}
//小浮点数先加在中间值1上，再加上大浮点数，再减去1
float addChange(float x,float y)
{
    float k = 1;
    for (int i = 0; i < 10000; i++)
    {
        k += x;
    }
    y = y + k -1;
    return y;
}

