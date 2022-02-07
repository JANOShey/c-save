#include<stdio.h>
#include<string.h>
//char *dst = (char *)malloc(strlen(sdc) + 1);(为dst申请内存防止重叠，要注意'\0'的存在)
//strcpy(dst, scr);（粘贴，复制）
char* mycpy(char* dst,const char* src)
{
    //int idx = 0;
    //while (src[idx])
    //{
    //    dst[idx] = src[idx];
    //    idx++;
    //}
    //dst[idx] = '\0';
    char *ret = dst;
    while ((*dst++ = *src++))
        ;
    *dst = '\0';
    return ret;
}
int main()
{
    char s1[] = "abc";
    char s2[] = "edg";
    mycpy(s1, s2);
    printf("%s ", s1);
    return 0;
}
