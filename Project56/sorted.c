#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
int main()
{
	int i = 0;
	int n = 0;
	int m = 0;
	int c = 0;
	scanf("%d %d", &n, &m);
	int* p = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &c);
		*(p + i) = c;
	}
	i = 0;
	int j = 0;
	while (i < m )
	{
		scanf("%d", &c);
		while (1)
		{
			if (c > *(p + j) && j < n)
			{
				printf("%d ", *(p + j));
				j++;
			}
			else
			{
				printf("%d ", c);
				i++;
				break;
			}
		}
	}
	if (j < n)
	{
		for (; j < n; j++)
		{
			printf("%d ", *(p + j));
		}
	}
	return 0;
}
