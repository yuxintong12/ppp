#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		j = i * 10 + 6;
		if (j % 3 != 0)
			continue;
		printf("%d\n", j);
	}
}
