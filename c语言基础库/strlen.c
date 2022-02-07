#include<stdio.h>
#include<string.h>
size_t mylen(const char*s)
{
    int idx=0;
    while (s[idx]!='\0')
    {
        idx++;
    }
    return idx;
}
int main()
{
    char line[] = "hello";
    printf("strlen=%llu\n", mylen(line));
    printf("sizeof=%llu\n", sizeof(line));
    return 0;
}
