#include "ga.h"
void hh()
{
	printf("***************\n");
	printf("**** 1.play****\n");
	printf("**** 2.exit****\n");
	printf("***************\n");
}
void game()
{
	//定义放雷的数组和显示的数组
	char ch[HANG][LIE] = { ' ' };
	char ph[HANG][LIE] = { ' ' };
	//填充初始化数组
	ti(ch, HANG, LIE, '0');
	ti(ph, HANG, LIE, '*');
	//放雷
	put()
}
int main()
{
	int input;
	do
	{//打印界面
		hh();
		//输入初始判断值
		scanf("%d", &input);
		//进行游戏状态的判断
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}

	} while (input);
}