#define _CRT_SECURE_NO_WARNINGS 1
#include"gg.h"

void pr()
{
	printf("*************\n");
	printf("*   1.play  *\n");
	printf("*   0.exit  *\n");
	printf("*************\n");
}
void game()
{
	//设定判定变量
	int judge = 0;
	//创建数组并且初始化放入空格
	char arr[HA][LI];
	init(arr,HA,LI);
	//打印棋盘
	print(HA, LI, arr);
	while (1)
	{
		//玩家移动
		player_move(arr, HA, LI);
		print(HA, LI, arr);
		//电脑移动
		srand((unsigned int)time(NULL));
		com_mov(arr, HA, LI);
		print(HA, LI, arr);
		judge = win(arr, HA, LI);
		if (judge == '*')
		{
			printf("你赢了\n");
			break;
		}
		else if (judge == '#')
		{
			printf("你输了\n");
			break;
		}
		else if (judge == 'p')
		{
			printf("平了\n");
			break;
		}
		else
		{
			printf("游戏继续\n");
		}

	}

}

int main()
{
	//判断依据
	int input = 0;
	do
	{
		pr();
		printf("请输入:>");
		scanf("%c", &input);//读取字符可以排除输入整数之外的字符导致死循环，同时也可以实现do  while的判段条件
		getchar();//getchar的目的是将字符后边的\n
		switch (input)
		{
			case '1':
				printf("三子棋\n");
				game();
				break;
			case '0':
				printf("退出游戏\n");
					break;
			default:
				printf("输错了\n");
		}
		Sleep(1000);
		system("pause");
		system("cls");

	} while (input);
	return 0;
}