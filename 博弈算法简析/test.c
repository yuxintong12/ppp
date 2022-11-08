#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#define H_max 3
#define L_max 3
int main()
{


	int option;

	printf("##########三子棋#########\n");
	printmenu();
	while (1)
	{
		option = getchar();
		getchar();
		switch (option)
		{
		case '1':play(); break;
		case '2':return 0; break;
		default:printf("输入错误！请重新输入\n"); printmenu(); break;
		}
	}



}