#include<stdio.h>

int main()
{
    int a;
    int b=0;
    int x=0;
    scanf("%d",&x);
    while (x>0)
    {
        a=x%10;
        b=b*10+a;
        x/=10;
    }
    printf("%d",b);
    return 0;
}
