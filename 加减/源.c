#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int sum = 0;
	for (i = 0; i <= 101; i++)
	{
		if (i % 2 != 0)
		{
			sum += pow((-1), (i - 1) / 2)*i;

		}
	}
	printf("%d", sum);
	return 0;
}