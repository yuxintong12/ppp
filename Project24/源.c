#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
void print(int x)
{
	if (x > 9)
	{
		int c = 0;
		c = x % 10;
		print(x / 10);
		printf("%d ", c);
	}
	else
		printf("%d ", x);
	
}

int main()
{
	int c = 0;
	int a;
	scanf("%d",&a);
	print(a);
	return 0;
}