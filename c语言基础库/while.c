#include<stdio.h>
int main()
{
    int a;
    int n=0;
    scanf("%d",&a);
    n++;
    a=a/10;
    while(a>0)
    {
        n++;
        a=a/10;
    }
    printf("%d",n);
    return 0;
}
