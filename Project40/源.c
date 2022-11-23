#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void compute(int x)
{
    static int r = 0;
    if (x >= 6)
    {
        compute(x / 6);
        r = x % 6;
        printf("%d", r);
    }
    else
    {
        printf("%d", x);
    }
}
int main()
{
    int x = 0;
    scanf("%d", &x);
    compute(x);
    return 0;
}