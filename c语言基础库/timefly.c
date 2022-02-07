#include<stdio.h>
int main()
{
    int time;
    int going;
    int hour;
    int minute;
    int timert;
    int a;
    printf("请输入一个时间点（?时?分）及时间差（分钟）,例如1345指下午1点45分，56指56分钟后：");
    scanf("%d %d",&time,&going);
    
    hour=time/100;
    minute=time%100;
    a=60*hour+minute;
    timert=a+going;
    
    printf("经过这段时间的时间点是%d",((timert/60)*100+timert%60));

    return 0;
}