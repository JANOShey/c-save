#include<stdio.h>

int main()
{
    int x;
    int cnt=0;
    //int number;
    //printf("需要的素数个数：");
    //scanf("%d",&number);
    for(x=1;cnt<50;x++)
    {
            int i;
            int insprime=1;
            for (i=2;i<x;i++)
            {
                if (x%i==0)
                {
                    insprime=0;
                    break;
                }

            }
            if(insprime==1){
                cnt++;
                printf("%d\t",x);
                if(cnt%5==0){
                    printf("\n");
                }
            }

    }
    return 0;
}
