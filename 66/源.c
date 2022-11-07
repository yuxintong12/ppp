#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int a[1000];
int b[1000];

int max(int b[1000], int t)
{
	int c = b[0];
	for (int i = 1; i < t; i++)
	{
		if (b[i] > c)
		{
			c = b[i];
		}
	}
	return c;
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		int t;
		scanf("%d", &t);
		for (int i = 0; i < t; i++)
		{
			scanf("%d ", &a[i]);
			sum += a[i];
		}
		for (int j = 0; j < t; j++)
		{
			scanf("%d ", &b[i]);
			sum += b[i];
		}
		int x = max(b, t);
		sum -= x;
		printf("-----%d\n", x);
		printf("----------%d\n", sum);


	}
	return 0;
}