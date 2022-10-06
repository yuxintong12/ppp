#define _CRT_SECURE_NO_WARNINGS 1
#include"mm.h"
void pr()
{
	printf("*****************\n");
	printf("****  1.play ****\n");
	printf("****  0.exit ****\n");
	printf("*****************\n");
}
void game()
{
	//放棋子
	char ch[HA][LI] = {' '};
	//填充数组
	ta(ch,HA,LI);
	//打印棋盘
	pp(ch,HA,LI);
	char re = 0;
	while (1)
	{
		player(ch, HA, LI);
		pp(ch, HA, LI);
		re = who(ch, HA, LI);
		if (re != 'c')
			break;
		com(ch, HA, LI);
		pp(ch, HA, LI);
		re = who(ch, HA, LI);
		if (re != 'c')
			break;
	}
	if (re == '*')
	{
		printf("你赢了\n");
	}
	if (re == '#')
	{
		printf("你输了\n");
	}
	if (re == 'p')
	{
		printf("平局了\n");
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		//界面布局
		pr();
		scanf("%d", &input);
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
			printf("非法输入\n");
			
		}
	} while (input);
}
