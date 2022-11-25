#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int* p = (int*)malloc(sizeof(int) * n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int m = 0;
        scanf("%d", &m);
        *(p + i) = m;
    }
    int c = 0;
    int max = *p;
    for (i = 0; i < n; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
            c = i;
        }
    }
    if (c != n - 1)
    {
        printf("unsorted");
    }
    else
    {
        printf("sorted");
    }
    return 0;
}