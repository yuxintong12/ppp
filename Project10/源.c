#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define NUM 3
void de(int arr[], int num)
{
    int j,i;
    for (j = 0; j < num; j++)
    {
        for (i = 0; i <= num - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                    int ret  = 0;
                    arr[i] = ret;
                    arr[i] = arr[i + 1];
                    arr[i + 1] = ret;
            }
        }
    }
}
    int main()
{
    int arr[3] = { 0 };
    int i;
    for (i = 0; i < NUM; i++)
    {
        scanf("%d", &arr[i]);
    }
    de(arr,NUM);
    for (i = 0; i < NUM; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}