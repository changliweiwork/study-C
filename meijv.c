#include <stdio.h>
#include <stdlib.h>

int main()
{

    enum day
    {
        saturday,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday
    } workday;

    int a = 5;
    enum day weekend;
    printf("weekend:%d\n", workday);
    weekend = (enum day)5; //类型转换
    //eekend = a; //错误
    printf("weekend:%d", weekend);
    return 0;
}