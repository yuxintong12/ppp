#define _CRT_SECURE_NO_WARNINGS 1
#include"gg.h"

void pr()
{
	printf("*************\n");
	printf("*   1.play  *\n");
	printf("*   0.exit  *\n");
	printf("*************\n");
}
void game()
{
	//�趨�ж�����
	int judge = 0;
	//�������鲢�ҳ�ʼ������ո�
	char arr[HA][LI];
	init(arr,HA,LI);
	//��ӡ����
	print(HA, LI, arr);
	while (1)
	{
		//����ƶ�
		player_move(arr, HA, LI);
		print(HA, LI, arr);
		//�����ƶ�
		srand((unsigned int)time(NULL));
		com_mov(arr, HA, LI);
		print(HA, LI, arr);
		judge = win(arr, HA, LI);
		if (judge == '*')
		{
			printf("��Ӯ��\n");
			break;
		}
		else if (judge == '#')
		{
			printf("������\n");
			break;
		}
		else if (judge == 'p')
		{
			printf("ƽ��\n");
			break;
		}
		else
		{
			printf("��Ϸ����\n");
		}

	}

}

int main()
{
	//�ж�����
	int input = 0;
	do
	{
		pr();
		printf("������:>");
		scanf("%c", &input);//��ȡ�ַ������ų���������֮����ַ�������ѭ����ͬʱҲ����ʵ��do  while���ж�����
		getchar();//getchar��Ŀ���ǽ��ַ���ߵ�\n
		switch (input)
		{
			case '1':
				printf("������\n");
				game();
				break;
			case '0':
				printf("�˳���Ϸ\n");
					break;
			default:
				printf("�����\n");
		}
		Sleep(1000);
		system("pause");
		system("cls");

	} while (input);
	return 0;
}