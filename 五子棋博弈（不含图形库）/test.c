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
	while (1)
	{
		//�������
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
		puts("����չʾ:>");
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
			printf("��ô����\n");
			break;
		}
	} while (judge != '2');
	return 0;
}