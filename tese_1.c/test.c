#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>
void pr()
{
	printf("**************\n");
	printf("*  1、开始   *\n");
	printf("*  0、结束   *\n");
	printf("**************\n");
}
void game()
{
	int a = 0;
	//生成随机数
	int s = rand() % 100 + 1;
	while (1)
	{
		printf("请输入:>");
		scanf("%d", &a);
		if (a == s)
		{
			printf("你真厉害，猜对了\n");
			Sleep(10);
			system("cls");
			break;
		}
		else if (a != s)
		{
			if(a > s)
			printf("猜大了呀，请继续吧\n");
			if(a < s)
				printf("猜小了呀，请继续吧\n");
		}
		else printf("输入非法\n");
	}

}
int main()
{
	//使生成的数变得随机，采用时间戳,并且传入空指针。
	srand((unsigned int)time(NULL));
	int input = 0;//放在外边可以使得while进行判断
	do
	{
		//打印菜单
		pr();
		
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
			printf("猜数字\n");
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}

