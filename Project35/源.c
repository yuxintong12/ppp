#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int i = 0;
    scanf("%d", &i);
    int j = 0;
    for (j = 1; j <= 31;j += 2)
    {
        if ((i >> j)&1 == 1)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }

    }
    printf("\n");
    for (j = 2; j <= 32; j += 2)
    {
        if ((i >> j) & 1 == 1)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }

    }
    printf("\n");

    return 0;
}