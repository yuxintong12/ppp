#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 200; i++)
	{
		if (i % 7 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}