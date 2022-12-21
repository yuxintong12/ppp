#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h>
int main()
{
    int i = 0;
    scanf("%d", &i);
    int* p = (int*)malloc(sizeof(int) * i);
    int j = 0;
    int m = 0;
    for (j = 0; j < i; j++)
    {
        scanf("%d", &m);
        p[j] = m;
    }
    int n = 0;
    for (j = 0; j < i - 1; j++)
    {
        for (n = 0; n < i - 1 - j; n++)
        {
            if (p[n] >= p[n + 1])
            {
                int te = p[n];
                p[n] = p[n + 1];
                p[n + 1] = te;
            }
        }
    }
    for (n = i - 1; n > i - 6; n--)
    {
        printf("%d ", p[n]);
    }
    return 0;
}