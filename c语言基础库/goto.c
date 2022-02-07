#include<stdio.h>
//利用goto实现 输入元数输出以角为单位的任意个数排列组合
int main()
{
    int x;
    int n=0;
    int one, two, five;
    scanf("%d", &x);
    for (one=1; one < x*10; one++)
    {
        for (two=1; two < x*5; two++)
        {
            for (five=1; five < x*2; five++)
            {
                if (one+two*2+five*5==x*10)
                {
                    printf("可以用%d个1角%d个2角%d个5角组成%d元\n", one, two, five, x);
                    n++;
                    if (n>=10)
                    {
                        goto out;
                    }

                }

            }

        }

    }
    out:
        return 0;
}
