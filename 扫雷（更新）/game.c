#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char de[HAS][LIS] = { '0' };
	char show[HAS][LIS] = { '0' };
	//初始化扫雷底层数组，并且传入相应的初始化字符
	init(de, HAS, LIS,'0');
	init(show, HAS, LIS,'*');
	//打印数组
	print(de, HA, LI);
	print(show, HA, LI);
	//放雷

	put(de,HA,LI);
	print(de, HA, LI);
	int y = NEW;
	while (1)
	{
		int x = play_remove(de, show, HA, LI);
		print(show, HA, LI);
		if (x == 0)
		{
			break;
		}
		else if (check(show, HA, LI) == 1)
		{
			printf("小主威武\n");
			break;
		}
	}


}
void sys()
{
	Sleep(1000);
	system("pause");
	system("cls");

}
void pr()
{
	printf("******************\n");
	printf("***  1. play   ***\n");
	printf("***  2. exit   ***\n");
	printf("******************\n");

}
int main()
{
	int input = '0';
	srand((unsigned int)time(NULL));

	do
	{
		pr();
		printf("请输入:>");
		scanf("%c", &input);
		getchar();
		switch (input)
		{
		case '1':
			printf("扫雷\n");
			game();
			break;
		case '0':
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	    sys();
	} while (input != '0');
	return 0;
}