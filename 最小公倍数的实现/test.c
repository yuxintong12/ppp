#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
void change(char* ch, int sz)
{
    char* left = ch;
    char* right = ch + sz - 1;
    while (left < right)
    {
        char te = 0;
        te = *left;
        *left = *right;
        *right = te;
        left++;
        right--;
    }
}
int main()
{
    char ch[100];
    scanf("%[^\n]", ch);
    int sz = strlen(ch);
    change(ch, sz);
    char* p1 = ch;
    char* p = ch;
    int c = 0;
    while (*p)
    {
        int c = 0;
        while (*p != ' ' && *p != '\0')
        {
            p++;
            c++;
        }
        change(p1, c);
        p1 += c + 1;
        p++;

    }
    printf("%s", ch);
    return 0;
}