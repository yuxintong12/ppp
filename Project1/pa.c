#include "ga.h"
void hh()
{
	printf("***************\n");
	printf("**** 1.play****\n");
	printf("**** 2.exit****\n");
	printf("***************\n");
}
void game()
{
	//������׵��������ʾ������
	char ch[HANG][LIE] = { ' ' };
	char ph[HANG][LIE] = { ' ' };
	//����ʼ������
	ti(ch, HANG, LIE, '0');
	ti(ph, HANG, LIE, '*');
	//����
	put()
}
int main()
{
	int input;
	do
	{//��ӡ����
		hh();
		//�����ʼ�ж�ֵ
		scanf("%d", &input);
		//������Ϸ״̬���ж�
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
			printf("�������\n");
			break;
		}

	} while (input);
}