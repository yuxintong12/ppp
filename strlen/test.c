#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* p)
{
	assert(p);//�ж�ָ�����Ч��
	char * p1 = p;
	while (*p++)
	{
		;
	}
	return p - p1 - 1;
}
int main()
{
	char arr[] = { "abcdef" };
	printf("%d\n", my_strlen(NULL));
	return 0;
}