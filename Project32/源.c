#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 1, sum = 0;
	for (n = 1; n <= 100; n++)
	{
		if (n % 10 == 6 || n / 10 == 6)
		{
			sum += n;
			printf("%d\n", n);
		}

	}
	printf("%d  ", sum);

	return 0;
}