#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;//���ͱ����Ĵ��������εĴ�СΪ4���ֽڣ���printf�����Ҫ%d
			//scanf����Ļ���Ҫ%d��������������ʱҲ��С����%nd���Կ����������λ��
	        //����scanf("%4d",&i),�������12345���ͻ��ȡ1234
	float b = 0;//floatҲ���ĸ��ֽڣ���������Ļ�Ҫ��%f����ͨ���ı�fǰ��ϵ�����������
	double c = 0;//double�ǰ˸��ֽ�
	char ch = '0';
	printf("������a,b,c,ch��ֵ��");
	scanf("%d,%f,%lf,%c", &a, &b, &c, &ch);
	printf("a=%d,b=%f,c=%lf,ch=%c", a, b, c, ch);
	putchar('\n');
	return 0;
}
