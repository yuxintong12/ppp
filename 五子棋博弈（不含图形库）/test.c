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
	//�����̽�����г�ʼ�����
	init(bord, HA, LI);//���������ݽ��г�ʼ��
	/*printf("00\n");*/
	//��ӡ����
	print_bord(bord, HA, LI);
	//�������
	int * p =player_move(bord, HA, LI);
	print_bord(bord, HA, LI);
	is_win(bord,HA,LI,p);
}
int main()
{
	char judge = 0;
	do
	{
		
		menu();
		puts("����չʾ:>");
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
			printf("��ô����\n");
			break;
		}
	} while (judge != '2');
	return 0;
}