#include <stdio.h>
#include<math.h>
int main() 
{
    long  c = 0;
    scanf("%ld",&c);
    getchar();
    double score = 0;
    double s = 0;
    double a = 0;
    int x = scanf("%lf,%lf,%lf",&score,&s,&a);
    score = (int)(score*100 + 0.5)/100.0;
    s = (int)(s*100 + 0.5)/100.0;
    a = (int)(a*100 + 0.5)/100.0;

    printf("The each subject score of No. %ld is %.2lf, %.2lf, %.2lf.",c,score,s,a);
    return 0;
}