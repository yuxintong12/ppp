#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int is_num(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int i = 100;
	for (i = 100; i <= 200; )
	{
		if (is_num(i) == 1)
		{
			i++;
		}
		else
		{
			printf("%dÊÇËØÊý\n", i);
			i += 2;
		}
	}
	
	return 0;

}