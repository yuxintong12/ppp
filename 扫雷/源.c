#define _CRT_SECURE_NO_WARNINGS 1
#include "li.h"
void pp()
{
	printf("***************\n");
	printf("**** 1.play****\n");
	printf("**** 0.exit****\n");
	printf("***************\n");
}
void game()
{
	char ch1[HA][LI] = { '0' };
	char ch2 = { '0' };
	//������������ַ�
	put(ch1, HA, LI, '0');
	put(ch2, HA, LI, '*');
	pr1(ch1);
	pr1(ch2);
}
int main()
{
	int input;
	do
	{
		pp();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ��\n");
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);

}