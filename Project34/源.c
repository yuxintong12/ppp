#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 20;//从20开始减少计算量
	while (1)//可以用for只不过for需要INT_MAX常量来确定查找范围
	{
		int c = i;//用c记录i并且进行操作进而起到保护i变量的目的使得能够不断递增
		if (c <= 0 || c % 5 != 1)//由题目中总结出来的条件，然后进行题目总结条件的判断
								//小于零也要判断，负数不可能出现所以尽量减少判断
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