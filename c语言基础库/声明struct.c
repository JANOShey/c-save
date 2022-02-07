#include<stdio.h>
//在函数内部声明的结构类型只能在函数内部使用
//所以通常在函数外部声明结构类型，这样可以被多个函数所使用
//编译器将前导为零的数字视为八进制，因此，大于7的数字将触发错误(如08)
struct date
{
    int month;
    int day;
    int year;
};
int main()
{
    struct date today = {7, 31, 2014};
    struct date tomorrow;
    tomorrow = today;
//    printf("tomorrow is %i-%i-%i\n",
//   tomorrow.month, tomorrow.day, tomorrow.year);
    tomorrow.day = 1;
    tomorrow.month = 8;

    struct date *pDate=&today;
    printf("address=%p\n", *pDate);

    printf("tomorrow's date is %i-%i-%i\n",
    tomorrow.month, tomorrow.day, tomorrow.year);
    struct date thismonth = {.month = 7, .year = 2014};
    printf("Today's date is %i-%i-%i\n",
        today.month, today.day, today.year);
    printf("This month is %i-%i-%i",
        thismonth.month, thismonth.day, thismonth.year);
    return 0;
}
