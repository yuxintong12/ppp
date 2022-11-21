#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(char* left, char* right)
{
    while (left < right)
    {
        char tem = *left;
        *left = *right;
        *right = tem;
        right--;
        left++;
    }
}
int main()
{
    int i = 0;
    char ch[10000];
    gets(ch);
    print(ch, ch + strlen(ch) - 1);
    for (i = 0; i < strlen(ch); i++)
    {
        printf("%c", ch[i]);
    }
    return 0;
}