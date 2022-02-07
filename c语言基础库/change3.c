#include <stdio.h>
//简单的收支
int main()
{
    int price = 0;

    const int amount =100;

    printf("请输入金额（元）?");
    scanf("%d", &price);

    int change = amount - price;

    printf("找您%d元。\n", change);

    return 0;
}
