#include <stdio.h>
// 一个数据交换
int main()
{
    int a=6;
    int b=5;
    int t;

    t=a;
    a=b;
    b=t;

    printf("a=%d,b=%d",a,b);

    return 0;
}
