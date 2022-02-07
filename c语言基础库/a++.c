#include<stdio.h>
//a++ 和 ++a的相同点都是给a+1，不同点是a++是先参加程序的运行再+1，而++a则是先+1再参加程序的运行。
int main()
{
    int a;
    a=10;

    printf("a++=%d\n",a++);
    printf("a=%d\n",a);

    printf("++a=%d\n",++a);
    printf("a=%d\n",a);

    return 0;
}
