#include<stdio.h>
// 定义一个确定的数
int main()
{
    const double rate=8.25;
    const int standard=40;
    double pay=0.0;
    int hour=0;

    printf("您的工作时长是？");
    scanf("%d",&hour);
    if (hour>standard)
    {
        pay=hour*rate+(hour-standard)*3;
    }else{
        pay=hour*rate;
    }
    printf("您的工资是%f元",pay);
    return 0;
}
