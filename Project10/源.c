#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    float arr[5][6] = { 0 };
    int i;
    int j;

    for (i = 0; i < 6; i++)
    {
        float sum = 0;
        for (j = 0; j < 5; j++)
        {
            scanf("%f", &arr[i][j]);
            sum += arr[i][j];
        }
        arr[i][j + 1] = sum;
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%5.1f ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}