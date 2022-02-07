#include <stdio.h>
// lfelse运用
int main()
{
    int a=0;
    int b=0;
    printf("输入两个整数:");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("数字较大的是%d",a);
    }else{
        printf("数字较大的是%d",b);
    }
    return 0;
}
