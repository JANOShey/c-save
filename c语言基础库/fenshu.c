#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);//引入任意整数
    int mask = 1;
    int t = x;//储存输入的数
    while (t>9)
    {
        t /= 10;
        mask *= 10;//判断输入整数的位数
    }
    printf("x=%d mask=%d\n", x, mask);
    do{
        int d = x / mask;//计算第一位数
        printf("%d", d);
        if(mask>0)
        {
            printf(" ");//分隔
        }
        x %= mask;//仅留下除第一位的数
        mask /= 10;
    } while (mask > 0);
    printf(" ");

    return 0;
}
