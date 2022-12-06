#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;
	int c = 0;
	int k = 0;
	int* p = (int*)malloc(sizeof(int) * n);
	int* p1 = (int*)malloc(sizeof(int) * m);
	for (k = 0; k < n; k++)
	{
		scanf("%d", &c);
		*(p + k) = c;
	}
	for (k = 0; k < m; k++)
	{
		scanf("%d", &c);
		*(p1 + k) = c;
	}
	while (i < n && j < m)
	{
		if (*(p + i) > *(p1 + j))
		{
			printf("%d ", *(p1 + j));
				j++;
		}
		else
		{
			printf("%d ", *(p + i));
			i++;
		}
	}
	if (i < n)
	{
		for (; i < n; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	else if (j < m)
	{
		for (; j < m; j++)
		{
			printf("%d ", *(p1 + j));
		}
	}
	return 0;
}