#include<stdio.h>
int main()
{
    const int number = 10;
    int i;
    int x;
    int count[number];
    for (i = 0; i < number; i++)
    {
        count[i] = 0;
    }
    scanf("%d", &x);
    while (x!=-1)
    {
        count[x]++;
        printf("输入下一个数字：");
        scanf("%d", &x);
    }
    for (i = 0; i < number; i++)
    {
        printf("%d:%d\n", i, count[i]);
    }
    return 0;
}
