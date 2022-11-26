#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
size_t my_strlen(const char* p)
{
	assert(p);//判断指针的有效性
	const char * p1 = p;
	while (*p++)
	{
		;
	}
	return p - p1 - 1;
}
int main()
{
	char arr[] = { "abcdef" };
	printf("%zd\n", my_strlen(arr));
	return 0;
}