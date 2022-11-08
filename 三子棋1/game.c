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
	char c = '0';
	//自定义玩家执子
	printf("请输入你所要执的子:>");
	scanf("%c", &c);
	//设定判定变量
	char judge = '0';
	//创建数组并且初始化放入空格
	char arr[HA][LI];
	init(arr,HA,LI);
	//打印棋盘
	print(HA, LI, arr);
	while (1)
	{
		//玩家移动
		player_move(arr, HA, LI,c);
		print(HA, LI, arr);
		judge = win(arr, HA, LI,c);
		
		if(judge == 'c')
		{
			printf("游戏继续\n");
		}//在在循环内部只用判断是否继续就好了不用判断别的。如果非c就跳出去就可
		else
		{
			break;
		}
		//电脑移动
		srand((unsigned int)time(NULL));
		com_mov(arr, HA, LI);
		print(HA, LI, arr);
		judge = win(arr, HA, LI,'#');
		
		if (judge == 'c')
		{
			printf("游戏继续\n");

		}
		else
		{
			break;
		}

	}
	if (judge == c)
	{
		printf("你赢了\n");
	}
	else if (judge == '#')
	{
		printf("小趴菜,fw\n");
	}
	else
	{
		printf("这都能平？？\n");
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
		getchar();
		system("cls");

	} while (input);
	return 0;
}