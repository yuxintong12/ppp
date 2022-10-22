#define _CRT_SECURE_NO_WARNINGS 1
#include "li.h"
void pp()
{
	printf("***************\n");
	printf("**** 1.play****\n");
	printf("**** 0.exit****\n");
	printf("***************\n");
}
void game()
{
	char ch1[HA][LI] = { '0' };
	char ch2 = { '0' };
	//在数组里放置字符
	put(ch1, HA, LI, '0');
	put(ch2, HA, LI, '*');
	pr1(ch1);
	pr1(ch2);
}
int main()
{
	int input;
	do
	{
		pp();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);

}