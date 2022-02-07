#include<stdio.h>
int isprime();
int main()
{
    const int number = 100;
    int prime[number];
    int count = 1;
    int i = 3;
    prime[0] = 2;
    while (count<number)
    {
        if (isprime(i,prime,count))
        {
            prime[count++] = i;
        }
        i++;
    }
    for ( i = 0; i < number; i++)
    {
        printf("%d", prime[i]);
        if ((i+1)%5)
            printf("\t");
        else
            printf("\n");
    }
    return 0;
}
int isprime(int x,int knownprimes[],int numberofknowprimes)
{
    int ret = 1;
    int i;
    for ( i = 0; i < numberofknowprimes; i++)
    {
        if (x%knownprimes[i]==0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}
