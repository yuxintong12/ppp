#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 1;
	int j = 0;
	int sum = 0;
	for (n = 1; n <= 100; n++)
	{
		j = pow(-1, n - 1) * 1 / n;
		sum += j;
	}
	printf("%d\n", sum);
	return 0;
}