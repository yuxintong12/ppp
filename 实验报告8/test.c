#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* scr)//char*����ֵ����ʹ�ô˺����ܹ��������������Ĳ�������const�������Ӻ����Ľ�׳��ʹ����Դ
											//���鲻�����ı�
{
	assert(dest && scr);//�ж����������ָ�벻�ǿ�ָ�룬ʹ�ú������Կ�����Կ�ָ�뱨���ڵ��Ե�ʱ�����ȷ������
	char* ret = dest;//��¼Ŀ�������ַ�����ز���
	while (*dest++ = *scr++)//�ڸ��Ƶ�ͬʱ���Ը��ݱ��ʽ��ֵ���ж�ѭ���������
	{
		;
	}
	return ret;
}
int main()
{
	char ch[10] =  "123456789" ;
	char ch1[10] =  "*********" ;
	printf("�ַ�һ��%s\n", ch);
	printf("�ַ�����%s\n", ch1);
	printf("������ַ���%s\n", my_strcpy(ch, ch1));
	return 0;
}