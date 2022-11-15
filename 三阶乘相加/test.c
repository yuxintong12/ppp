#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int factorial(int p)
{
	if (p == 1)
	{
		return 1;
	}
	else
	{
		return p * factorial(p - 1);
	}
}
int factorial_sum(int * p)
{
	int i = 3;
	int sum = 0;
	while (i > 0)
	{
		sum += factorial(*p);
		p++;
		i--;
	}
	return sum;
}
int main()
{
	int arr[3] = { 0 };
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	int sum = factorial_sum(arr);
	printf("s = %d", sum);
}