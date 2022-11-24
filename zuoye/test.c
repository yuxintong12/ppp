#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int line = 0;
	printf("请输入上半行数:>");
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		printf("\n");

	}
	line -= 1;
	for (i = 0; i < line; i++)
	{
		int c = 0;
		for (c = 0; c <= i; c++)
		{
			printf(" ");
		}
		for (c = 0; c < 2 * (line  - i) - 1; c++)
		{
			printf("*");
		}
		for (c = 0; c <= i; c++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}