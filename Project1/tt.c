#define _CRT_SECURE_NO_WARNINGS 1
#include"mm.h"
void pr()
{
	printf("*****************\n");
	printf("****  1.play ****\n");
	printf("****  0.exit ****\n");
	printf("*****************\n");
}
void game()
{
	//������
	char ch[HA][LI] = {' '};
	//�������
	ta(ch,HA,LI);
	//��ӡ����
	pp(ch,HA,LI);
	char re = 0;
	while (1)
	{
		player(ch, HA, LI);
		pp(ch, HA, LI);
		re = who(ch, HA, LI);
		if (re != 'c')
			break;
		com(ch, HA, LI);
		pp(ch, HA, LI);
		re = who(ch, HA, LI);
		if (re != 'c')
			break;
	}
	if (re == '*')
	{
		printf("��Ӯ��\n");
	}
	if (re == '#')
	{
		printf("������\n");
	}
	if (re == 'p')
	{
		printf("ƽ����\n");
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		//���沼��
		pr();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�Ƿ�����\n");
			
		}
	} while (input);
}
