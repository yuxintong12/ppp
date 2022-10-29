#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int main()
{
    int i = 0;
        scanf("%d", &i);
    int j = 0;
    float arr[2] = { 0 };
    int c = 0;
    for (j = 0; j < i; j++)
    {
        scanf("%d", &c);
        if (c - 60 < 0)
        {
            arr[0]++;
        }
        if (c - 60 >= 25)
        {
            arr[1]++;
        }
    }
    int pass = round((i - arr[0]) / i * 100);
    int great = round(arr[1] / i * 100);
    printf("%d%%\n", pass);
    printf("%d%%\n", great);
    // 请在此输入您的代码
    return 0;
}