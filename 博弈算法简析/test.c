#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#define H_max 3
#define L_max 3
int main()
{


	char option = 0;

	
	//while (1)//���Ըĳ�do while
	//{
	//	option = getchar();//��ȡ���������ʼ�����ж������ַ���
	//	//�������뷽�����ŵ��ǿ��Ա����ڶ�ȡ���ֵ����������������ַ�����ѭ�������
	//	getchar();//�������ַ�������Ļس�ȥ��������ᳵ�Ӻ���жϵ�Ӱ��
	//	switch (option)//�ص㣺switch���Զ��ַ������жϣ���Ϊͬʱ�ַ����塣
	//	{
	//	case '1':
	//		play(); 
	//		break;
	//	case '2':
	//		return 0; 
	//		break;
	//	default:printf("�����������������\n"); printmenu(); break;
	//	}
	/*}
	*/
	do
	{
		printf("##########������#########\n");
		printmenu();//��ӡ��ʼ����
		option = getchar();
		getchar();
		switch (option)
		{
		case '1':
			play();
			break;
		case '2':
			break;
		default:
			break;
		}
	} while (option != '2');
		return 0;



}