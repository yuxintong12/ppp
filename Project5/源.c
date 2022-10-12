#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j;
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		j = i * 10 + 6;
		sum += j;
	}
	printf("%d", sum);
	return 0;
}