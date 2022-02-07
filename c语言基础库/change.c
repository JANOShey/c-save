#include <stdio.h>
// if语句计算收支
int main()
{
    int price = 0;
    int bill = 0;

    printf("请输入金额（元）：");
    scanf("%d", &price);

    printf("请输入票面（元）:");
    scanf("%d",&bill);
    if (bill>=price)
    {
        printf("找您%d元",bill-price);
    }else{
        printf("您的钱不够，还需%d元",price-bill);
    }
    return 0;
}
