#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#define H_max 3
#define L_max 3
int main()
{


	char option = 0;

	
	//while (1)//可以改成do while
	//{
	//	option = getchar();//读取到输入的起始界面判断条件字符，
	//	//这种输入方法的优点是可以避免在读取数字的条件下输入其他字符出现循环的情况
	//	getchar();//将输入字符后产生的回车去掉，避免会车队后边判断的影响
	//	switch (option)//重点：switch可以对字符进行判断，因为同时字符家族。
	//	{
	//	case '1':
	//		play(); 
	//		break;
	//	case '2':
	//		return 0; 
	//		break;
	//	default:printf("输入错误！请重新输入\n"); printmenu(); break;
	//	}
	/*}
	*/
	do
	{
		printf("##########三子棋#########\n");
		printmenu();//打印初始界面
		option = getchar();
		getchar();
		switch (option)
		{
		case '1':
			play();
			break;
		case '2':
			break;
		default:
			break;
		}
	} while (option != '2');
		return 0;



}