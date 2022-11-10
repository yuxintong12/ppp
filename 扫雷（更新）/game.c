#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
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
	do
	{
		pr();
		printf("ÇëÊäÈë:>");
		scanf("%c", &input);
		getchar();
		switch (input)
		{
		case '1':
			printf("É¨À×\n");
			break;
		case '0':
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			printf("ÊäÈë´íÎó\n");
			break;
		}
		sys();
	} while (input != '0');
	return 0;
}