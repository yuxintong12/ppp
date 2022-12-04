#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int* p = (int*)malloc(sizeof(int) * n);
    int* p1 = (int*)malloc(sizeof(int) * m);
    int d = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &d);
        *(p + i) = d;
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &d);
        *(p1 + i) = d;
    }
    int c = 0;
    for (i = 0; i < n + m; i++)
    {
        if (i < n && i < m)
        {
            if (*(p + i) < *(p1 + c))
            {
                printf("%d ", *(p + i));
            }
            else
            {
                printf("%d ", *(p1 + c));
                c++;
            }
        }
        else
        {
            break;
        }
    }
        while (i <= m)
        {
            printf("%d ", *(p1 + i));
            i++;
            goto end;
        }
        while (i < n)
        {
            printf("%d ", *(p + i));
            i++;
        }
end:
    return 0;
}