#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    const double pai = acos(-1.0);
    double r = 0;
    double h = 0;
    printf("ÇëÊäÈë°ë¾¶:>\n");
    scanf("%lf", &r);
    printf("ÇëÊäÈë¸ß:>\n");
    scanf("%lf", &h);
    double v = pai * pow(r, 2) + 2 * pai * r * h;
    printf("%.3lf", v);
    return 0;
}
