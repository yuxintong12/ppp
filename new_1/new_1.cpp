#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	 //����Ǯ��
	int mon = 0;
	printf("��Ҫ��һ��ô:>");
	scanf("%d", &mon);
	//������ƿ����
	int dot = 0;
	//�������ϱ���
	int dri = 0;
	//ģ�⹺�����̣�������
	while (mon)
	{
		dot++;
		dri++;
		mon--;
		//һ����ƿ�������Ͷһ�һ�������Ͼͼ�һ��ƿ����
		if (dot % 2 == 0)
		{
			dri++;
			dot -= 1;
		}
	}
	printf("���ܹ�����:>%d\n", dri);
	return 0;
}