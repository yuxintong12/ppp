#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char de[HAS][LIS] = { '0' };
	char show[HAS][LIS] = { '0' };
	//��ʼ��ɨ�׵ײ����飬���Ҵ�����Ӧ�ĳ�ʼ���ַ�
	init(de, HAS, LIS,'0');
	init(show, HAS, LIS,'*');

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
	do
	{
		pr();
		printf("������:>");
		scanf("%c", &input);
		getchar();
		switch (input)
		{
		case '1':
			printf("ɨ��\n");
			game();
			break;
		case '0':
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
		sys();
	} while (input != '0');
	return 0;
}