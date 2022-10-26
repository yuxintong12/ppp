#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
    char ch[] = { "welcom to bit!!!!!" };
    char ch1[] = { "******************" };
    int i = 0;
    int sz = sizeof(ch) / sizeof(ch[0]) - 2;
    while (i <= sz)
    {
        ch1[i] = ch[i];
        ch1[sz] = ch[sz];
        printf("%s\n", ch1);
        Sleep(100);
        system("cls");
        i++;
        sz--;

    }

    return 0;
}