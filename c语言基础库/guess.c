#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// dowhile计数猜数
int main()
{
    srand((time(0)));
    int number=rand()%100+1;//随机三位数
    int count=0;
    int a=0;
    printf("我想到一个三位数以内的整数");
    do
    {
        printf("请输入一个数\n");
        scanf("%d",&a);
        count++;
        if(a>number)
        {
            printf("你猜的数字过大\n");
        }
        else if(a<number)
        {
            printf("你猜的数字过小\n");
        }
    }while (a!=number);
    printf("你猜对了？而且只用了%d次",count);
    return 0;
}
