#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b <= a; b++)//ͨ��for���ѭ��ʵ�ֳ����Ĳ��ϱ任
		{
			printf("%d * %d =%-2d ", a, b, a * b);//%-2d����ʹ�����������Ӻÿ�
			//��������ʹ��һλ������λ���Ŀ�ͷ����
		}
		printf("\n");
	}
	return 0;
}
