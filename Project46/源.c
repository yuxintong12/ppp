#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h>
void dubble(int* p, int x)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < x - 1; i++)
    {
        for (j = 0; j < x - 1 - i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                int te = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = te;
            }
        }
    }
}
int main()
{
    int n = 0;
    int m = 0;
    int i = 0;
    scanf("%d %d", &n, &m);
    int* p = (int*)malloc(sizeof(int) * (n + m));
    for (i = 0; i < n + m; i++)
    {
        int m = 0;
        scanf("%d", &m);
        *(p + i) = m;
    }
   dubble(p, m + n);
    int a = 0;
    for (a = 0; a < n + m; a++)
    {
        printf("%d ", *(p + a));
    }


    return 0;
}