#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <malloc.h>
#include<math.h>
void dev(int x, int* p)
{
	if (x > 9)
	{
		*p = x % 10;
		dev(x / 10,p + 1);
	}
	else
	{
		*p = x;
	}
}
int judge(int x)
{
	if (x < 10)
	{
		return 1;
	}
	else
	{
		return 1 + judge(x / 10);
	}
}
int main()
{
	int i = 0;
	for (i = 0; i < 10000; i++)
	{
		int c = judge(i);
		int j = 0;
		int* p = (int*)malloc(sizeof(int) * c);
		dev(i,p);
		int out = 0;
		for (j = 0; j < c; j++)
		{
			out +=  pow(*(p + j), c);
		}
		if (out == i)
		{
			printf("%d\n", out);
		}
		free(p);
	}
	return 0;
}