#include<stdio.h>
typedef union{
    int i;
    char ch[sizeof(int)];
} CHI; // typedef定义了类型新的名字，比如typrdef int hehehe;则是将int类型赋予hehehe的名字。
int main()
{
    CHI chi;
    int i;
    chi.i = 1234;//x86芯片小数在前，故00 00 04 d2排列为d2 04 00 00.
    for ( i = 0; i <sizeof(int); i++)
    {
        printf("%02hhx", chi.ch[i]);
    }
    return 0;
}
