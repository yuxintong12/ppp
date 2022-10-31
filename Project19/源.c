#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void dd(int arr[], int x)
{
    int j;
    int i;
    for (j = 0; j < x - 1; j++)
    {
        for (i = 0; i < x - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int tem = 0;
                tem = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tem;
            }
        }
    }
}




int main()
{
    int i = 0;
    int arr[3];
    for (i = 0; i < 3; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sz = sizeof(arr) / sizeof(arr[0]);
    dd(arr, sz);
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
