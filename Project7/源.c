#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	float F = 0;
	scanf("%f", &F);
	float c = 0;
	c = (5 / 9)*(F - 32);
	printf("%5.2f\n", c);
	return 0;

}