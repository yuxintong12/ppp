#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	int i = 100;
	for (i = 100; i <= 999; i++)
	{
		//´¦Àíº¯Êý
		int m,c,n;
		int j = 0;
		m = i % 10;
		c = i / 10 % 10;
		n = i / 100 % 10;
		j = pow(m, 3) + pow(c, 3) + pow(n, 3);

		if (j == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}