#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*****************************\n");
	printf("****     1.Add 2.Sub     ****\n");
	printf("****     3.mul 4.div     ****\n");
	printf("*******   0.exit    *********\n");
	printf("*****************************\n");


}
void compute(int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入操作数:>");
	scanf("%d,%d", &x, &y);
	int c = p(x, y);
	printf("结果是:>%d\n", c);
}
int main()
{
	int input = 0;
	int (*arr[4])(int, int) = { add,sub,mul,div };
	do
	{
		menu();
		printf("输入操作:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		default:
			compute(arr[input - 1]);
			break;

		}
		
	} while (input);
	return 0;
}