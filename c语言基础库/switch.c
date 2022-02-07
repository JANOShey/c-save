#include <stdio.h>
int main()
{
    int type;
    scanf("%d",&type);

    switch (type)
    {
    case 1:
    printf("hey!");
    break;
    case 2:
    printf("ha!");
    break;
    default:
        break;
    }
    return 0;
}
