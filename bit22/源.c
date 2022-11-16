#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int compute(int x, int y)
{
	int i = 0;
	int count = 0;
	for ( i = 0; i < 32; i++)
	{
		if (((x >> i) & 1) != ((y >> i) & 1))
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int i = 0;
	int j = 0;
	scanf("%d,%d", &i, &j);
	int c = compute(i, j);
	printf("%d\n", c);
	return 0;
}