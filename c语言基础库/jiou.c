#include<stdio.h>
#include<math.h>
// 对数字求特征值是常用的编码算法，奇偶特征是一种简单的特征值。
// 对于一个整数，从个位开始对每一位数字编号，个位是1号，十位是2号，
// 以此类推。这个整数在第n位上的数字记作x，如果x和n的奇偶性相同，则记下一个1，
// 否则记下一个0。按照整数的顺序把对应位的表示奇偶性的0和1都记录下来，就形成了一个二进制数字。
// 比如，对于342315，这个二进制数字就是001101。
int main()
{
    int number;
    int x;
    int a = 0;
    double i = 0;
    double re = 0;
    scanf("%d", &number);
    while (number > 0)
    {
        i++;
        a++;
        x = number % 10;
        number = number / 10;
        if (a%2==0)
        {
            if (x%2==0)
            {
                re = re + pow(2, i - 1);
            }

        }else if (a%2!=0)
        {
            if (x%2!=0)
            {
                re = re + pow(2, i - 1);
            }
            }
    }

    printf("%d",(int)re);

    return 0;
}
