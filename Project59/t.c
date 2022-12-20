#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
char* mystrncpy(char* dest, const char* scr, int n)
{
    assert(dest && scr);
    char* ret = dest;
    while ((*dest++ = *scr++) && n--)
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
    
