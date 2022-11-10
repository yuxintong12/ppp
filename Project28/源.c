#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 100;
	int a, b, c;
	printf("Ë®ÏÉ»¨Êý£º\n");
		for (n; n < 1000; n++)
		{
			a = n / 100;
			b = n / 10 % 10;
			c = n % 10;
			if (a * a * a + b * b * b + c * c * c == n)
			{
				printf("%d\n", n);
			}
		}
	return 0;
}
