#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    int i = 0;
    int j = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}