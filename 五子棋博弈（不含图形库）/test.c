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
	char bord[HA] = { 0 };
	char show[LI] = { 0 };

}
int main()
{
	char judge = 0;
	do
	{
		puts("来吧展示:>");
		menu();
		judge = getchar();
		getchar();
		switch (judge)
		{
		case '1':
			play();
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