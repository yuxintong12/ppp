#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* scr)
{
	assert(dest && scr);
	char* ret = dest;
	while (*dest++ = *scr++)
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