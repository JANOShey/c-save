#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[] = "hello";
    char *p = strchr(s, 'l');//将p指向llo
    *p='\0';//将p指向的llo删去
    char *t = (char *)malloc(strlen(s) + 1);
    strcpy(t, s);
    printf("%s\n", t);
    free(t);
    return 0;
}
