#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char ch[5];
    int i = 0;
    gets(ch);
    for (i = 4; i >= 01; i--)
    {
        printf("%d", ch[i]);
    }

    return 0;
}