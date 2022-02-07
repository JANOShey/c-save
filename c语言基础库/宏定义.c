#include<stdio.h>
#define aaa printf
//定义一个新的宏 aaa为名字 printf是其字符or数值
//以#开头的为预处理代码，与C语言无关，其他语言也一样存在，程序开始前会先运行预处理。
#define aha     int a = 1;\
                printf("%d\n", a)
//有多行时用 \ 区分
#define cube(x) ((x)*(x)*(x))
//宏内可以带参数
int main()
{
    aaa("%s %d\n",__FILE__,__LINE__);//此处为自带的宏，工作的时候文件名不要带中文，此处中文文件名要用不同编码形式
    printf("%s,%s\n", __DATE__, __TIME__);
    aha;
    printf("%d", cube(5));
    return 0;
}
