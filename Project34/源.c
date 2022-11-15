#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 20;
	while (1)
	{
		int c = i;
		if (c <= 0 || c % 5 != 1)
		{
			i++;
			continue;
		}
		c -= 1;
		c *= 4.0 / 5;
		if (c <= 0 || c % 5 != 2)
		{
			i++;
			continue;
		}
		c -= 2;
		c *= 4.0 / 5;
		if (c <= 0 || c % 5 != 3)
		{
			i++;
			continue;
		}
		c -= 3;
		c *= 4.0 / 5;
		if (c <= 0 || c % 5 != 4)
		{
			i++;
			continue;
		}
		c -= 4;
		c *= 4.0 / 5;
		if (c <= 0 || c % 5 != 0)
		{
			i++;
			continue;
		}
		else
		{
			printf("%d", i);
			break;
		}
	}

		
	return 0;

}