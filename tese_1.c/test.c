#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>
void pr()
{
	printf("**************\n");
	printf("*  1����ʼ   *\n");
	printf("*  0������   *\n");
	printf("**************\n");
}
void game()
{
	int a = 0;
	//���������
	int s = rand() % 100 + 1;
	while (1)
	{
		printf("������:>");
		scanf("%d", &a);
		if (a == s)
		{
			printf("�����������¶���\n");
			Sleep(10);
			system("cls");
			break;
		}
		else if (a != s)
		{
			if(a > s)
			printf("�´���ѽ���������\n");
			if(a < s)
				printf("��С��ѽ���������\n");
		}
		else printf("����Ƿ�\n");
	}

}
int main()
{
	//ʹ���ɵ���������������ʱ���,���Ҵ����ָ�롣
	srand((unsigned int)time(NULL));
	int input = 0;//������߿���ʹ��while�����ж�
	do
	{
		//��ӡ�˵�
		pr();
		
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}

