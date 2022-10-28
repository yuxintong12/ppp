#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    long long int i = 0;
    scanf("%lld", &i);

    long long int sum = 0;
    sum = (i * (i + 1)) / 2;
    printf("%lld", sum);
    return 0;
}