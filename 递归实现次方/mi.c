#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int  mi(int x, int y)
{
	x *= x;
	if (y == 1)
	{
		mi(x, y - 1);
	}
	return x;
}
int main()
{
	int a = 0;
	int b = 0;
	int output = 0;
	printf("输入底数:\n");
		scanf("%d", &a);
		printf("请输入指数:\n");
		scanf("%d", &b);
		output = mi(a, b);
		printf("%d的%d次方的结果是：\n%d",a,b, output);
		return 0;
}