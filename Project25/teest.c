#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void mov(char x, char y)
{
	printf("%c -> %c\n", x, y);
}
void han(int n, char a, char b, char c)
{
	if (n == 1)
	{
		mov(a, c);
	}
	else
	{
		han(n - 1, b, a, c);
		mov(b, a);
		han(n - 1, a, b, c);
	}
}
int main()
{
	int input = 0;
	//初始设定
	printf("几个盘子\n");
	scanf("%d", &input);
	//铺设盘子和棋盘
	han(input, 'a', 'b','c');
	printf("次数%1.0f\n", pow(2, input)- 1);
	return 0;
}