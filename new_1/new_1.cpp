#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	 //����Ǯ��
	int mon = 0;
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
		if (dot % 2 == 0)
		{
			dri++;
			dot -= 2;
		}
	}
	printf("%d", dri);
	return 0;
}