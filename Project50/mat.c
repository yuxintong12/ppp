#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 0;
	for (i = 100; i <= 1000; i++)
	{
		int sum = 0;
		n = floor(i / 100);
		k = floor((i - n * 100) / 10);
		j = i - k * 10 - n * 100;
 		sum = (int)pow(n , 3) + (int)pow(k, 3) + (int)pow(j, 3);
		if (sum == i)

		{
			printf("%d", sum);
		}
	}
	return 0;
}