#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
void ga(int x, int* a)
{
    static int i = 0;
    *a++ = x % 10;
    i++;
    if (i < 4)
    {
        ga(x / 10, a);
    }
}
int main()
{
    int arr[4];
    int i = 0;
    int j = 0;
    scanf("%d", &i); #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
        void ga(int x, int* a)
    {
        static int i = 0;
        *a++ = x % 10;
        i++;
        if (x > 9)
        {
            ga(x / 10, a);
        }
    }
    int main()
    {
        int arr[4];
        int i = 0;
        int j = 0;
        scanf("%d", &i);
        ga(i, arr);
        for (j = 0; j < 4; j++)
        {
            printf("%d", arr[j]);
        }
        return 0;
    }
    ga(i, arr);
    assert(arr != NULL);
    for (j = 0; j < 4; j++)
    {
         printf("%d", arr[i]);
    }
    return 0;
}