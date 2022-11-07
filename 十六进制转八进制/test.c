#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    char in = '0';
    scanf("%c", &in);
    int i = 0;
    int j = 0;
    for (i = 1; i <= 3; i++)
    {
        for (j = 0; j < 3 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++)
        {
            printf("%c", in);
        }
        for (j = 0; j < 3 - i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for (i = 2; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++)
        {
            printf("%c", in);
        }
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}