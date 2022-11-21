#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float compute(int x)
{
	float sum = 0;
	if (x % 2 == 0)
	{
		for (; x > 0; x -= 2)
		{
			sum += 1.0 / x;

		}
	}
	else
	{
		for (; x > 0; x -= 2)
		{
			sum += 1.0 / x;

		}
	}
	return sum;
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	float sum = compute(input);
	printf("sum = %.1f\n", sum);
	return 0;
}
