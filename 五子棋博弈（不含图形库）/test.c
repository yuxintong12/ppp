#define _CRT_SECURE_NO_WARNINGS 1
#include "fun.h"
void menu()
{
	printf("******************\n");
	printf("   1.play 2.exit  \n");
	printf("******************\n");
}
void play()
{
	char win = 0;
	char bord[HA][LI] = {0};
	//对棋盘界面进行初始化设计
	init(bord, HA, LI);//对棋盘内容进行初始化
	/*printf("00\n");*/
	//打印棋盘
	print_bord(bord, HA, LI);
	while (1)
	{
		//玩家下棋
		int* p = player_move(bord, HA, LI);\
		char a = is_win(bord, HA, LI, p);
		if (a != 'c')
		{
			assert(a > 0);
			print_bord(bord, HA, LI);
			break;
		}
		p = computer_move(bord, HA, LI);
		print_bord(bord, HA, LI);
		a = is_win(bord, HA, LI, p);
		if (a != 'c'&&a != ' ')
		{
			assert(a > 0);
			printf("%d\n", a);
			print_bord(bord, HA, LI);
			break;
		}
		

	}

}
int main()
{
	srand((unsigned int)time(NULL));
	char judge = 0;
	do
	{
		
		menu();
		puts("来吧展示:>");
		judge = getchar();
		getchar();
		switch (judge)
		{
		case '1':
			play();
			getchar();
			break;
		case '2':
			break;
		default:
			printf("怎么回事\n");
			break;
		}
	} while (judge != '2');
	return 0;
}