#include<stdio.h>
// 三位整数的逆序
int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("请输入三位整数：");
    scanf("%d",&a);

    b=a%10;
    d=a/100;
    c=a/10-d*10;

    printf("%d",(b*100+c*10+d));

    return 0;
}
