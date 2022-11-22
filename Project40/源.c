#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//负数转原码输出
void change(int* x)
{
	*x = ~(*x) + 1;

}
void print(int x)
{
	int i = 0;
	for (i = 31; i >= 0; i--)
	{
		if ((x >> i) & 1 == 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
void print1(int x)
{
	int i = 0;
	for (i = 31; i >= 0; i--)
	{
		if ((x >> i) & 1 == 1||i == 31)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
int main()
{
	//输入数字
	int input = 0;
	scanf("%d", &input);
	//输出原码
	if (input < 0)
	{
		change(&input);
		print1(input);
	}
	else
	{
		print(input);

	}
	return 0;
}