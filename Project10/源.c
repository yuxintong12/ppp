#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void line(int arr[], int sz)
{
    int i, j;
    for (i = 1; i < sz; i++)
    {
        for (j = 0; j < i; j++)
        {
            int tem = 0;
            if (arr[i] < arr[j])
            {
                tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }
}
int main()
{
    int j ;
    int arr[3];
    for (j = 0; j < 3; j++)
    {
        scanf("%d", &arr[j]);
    }
        int sz = sizeof(arr) / sizeof(arr[0]);
        line(arr, sz);
        int i;
        for (i = 0; i < sz; i++)
        {
            printf("%d ",arr[i]);
        }
    return 0;
}