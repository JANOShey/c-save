#include <stdio.h>
// switchcase运用
int main()
{
    int grade;
    scanf("%d",&grade);
    grade=grade/10;
    switch(grade)
    {
    case 10:
    case 9:
    printf("优");
    break;
    case 8:
    printf("良");
    break;
    case 7:
    printf("中");
    break;
    case 6:
    printf("及格");
    break;  /* code */
    default:
    printf("不及格");
        break;
    }
    return 0;

}
