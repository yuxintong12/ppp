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
	char c = '0';
	//�Զ������ִ��
	printf("����������Ҫִ����:>");
	scanf("%c", &c);
	//�趨�ж�����
	char judge = '0';
	//�������鲢�ҳ�ʼ������ո�
	char arr[HA][LI];
	init(arr,HA,LI);
	//��ӡ����
	print(HA, LI, arr);
	while (1)
	{
		//����ƶ�
		player_move(arr, HA, LI,c);
		print(HA, LI, arr);
		judge = win(arr, HA, LI,c);
		
		if(judge == 'c')
		{
			printf("��Ϸ����\n");
		}//����ѭ���ڲ�ֻ���ж��Ƿ�����ͺ��˲����жϱ�ġ������c������ȥ�Ϳ�
		else
		{
			break;
		}
		//�����ƶ�
		srand((unsigned int)time(NULL));
		com_mov(arr, HA, LI);
		print(HA, LI, arr);
		judge = win(arr, HA, LI,'#');
		
		if (judge == 'c')
		{
			printf("��Ϸ����\n");

		}
		else
		{
			break;
		}

	}
	if (judge == c)
	{
		printf("��Ӯ��\n");
	}
	else if (judge == '#')
	{
		printf("Сſ��,fw\n");
	}
	else
	{
		printf("�ⶼ��ƽ����\n");
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
		getchar();
		system("cls");

	} while (input);
	return 0;
}