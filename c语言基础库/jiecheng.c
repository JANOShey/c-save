#include<stdio.h>
// for语句判断
int main()
{
    int x;
    scanf("%d",&x);
    int number=1;

    for (int i=1;i<=x;i++)
    {
        number*=i;
    }
    printf("%d",number);
    return 0;
}
