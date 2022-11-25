#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h>
#include<math.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int* p = (int*)malloc(sizeof(int) * pow(n, 2));
    int i = 0;
    int m = 0;
    for (i = 0; i < n * n; i++)
    {
        scanf("%d", &m);
        *(p + i) = m;
    }
    int j = 0;
    int line = 0;
    int flag = 0;
    while (line <= n)
    {
        if (line >= 1)
        {
            for (j = 0; j < line; j++)
            {
                if (*(p + j) != 0)
                {
                    flag++;
                    goto out;
                }
            }

            
            
        }
        if (line < n )
        {
            p += n;
            line++;
        }

    }
out:
    if (flag == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}