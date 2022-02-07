#include<stdio.h>
int f(void);
int gALL = 12;
//静态本地变量作为一种特殊全局变量存在
//具有和全局变量一样的生存期
//但只运用在函数本身
int main()
{
    f();
    f();
    f();
    return 0;
}
int f(void)
{
    static int all = 1;
    printf("in %s all=%d/n",__func__, all);
    all += 2;
    printf("agn in %s all=%d\n", __func__, all);
    return all;
}
