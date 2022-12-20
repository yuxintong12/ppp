#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
char* mystrncpy(char* dest, const char* scr, int n)
{
    assert(dest && scr);
    char* ret = dest;
    while ((*dest++ = *scr++) && n--)//在&&前面如果是一个切实要算出数的表达式的话需要加括号的，就像这个表达式，我的本意是对*dest进行赋值*scr但如果不加括号的话语意就会发生改变会给*dest赋（*scr && n）的值了。
    {
        ;
    }
    return ret;
}
int main()
{
    char ch[20] = "yuxintong";
    char ch1[10] = "lvxiao";
    printf("%s\n", mystrncpy(ch, ch1, 2));

    printf("%s\n",strncpy(ch, ch1, 2));
    return 0;
}
    
