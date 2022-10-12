#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	int sum = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 13 == 0)
		{
			if (sum < i)
			{
				sum += i;
			}
		}
	}
	printf("%d", sum);
	return 0;
}