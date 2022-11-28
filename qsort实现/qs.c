#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h>
void flag1(int* p, int n)
{
    int i = 0;
    int k = i + 1;
    while (i < n - 1)
    {
        if (*(p + i) <= *(p + k))
        {
            k++;
            i++;
        }
        else
        {
            break;
        }
    }
    if (i < n - 1)
    {
        printf("unsorted\n");
    }
    else
    {
        printf("sorted\n");

    }
}
void flag2(int* p, int n)
{
    int i = 0;
    int k = i + 1;
    while (i < n - 1)
    {
        if (*(p + i) >= *(p + k))
        {
            k++;
            i++;
        }
        else
        {
            break;
        }
    }
    if (i < n - 1)
    {
        printf("unsorted\n");
    }
    else
    {
        printf("sorted\n");

    }
}
void judge(int* p, int n)
{
    int j = 1;
    int left = 0;
    int right = n - 1;
    if (*(p + left) - *(p + right) <= 0)
    {
        flag1(p, n);
    }
    else
    {
        flag2(p, n);
    }
}
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
    judge(p, n);
    
    return 0;
}