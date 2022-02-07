#include<stdio.h>
int f(void)
{
    char word[8];
    char word2[8];
    scanf("%7s", word);
    scanf("%7s", word2);//7s限制输入大小
    printf("%s##%s\n", word,word2);
    return 0;
    //scanf读入一个单词直到空格、tab、或者回车为止
}
int main()
{
    f();
    return 0;
}
