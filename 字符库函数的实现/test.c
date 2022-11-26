#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* scr)
{
	assert(dest && scr);
	char* tem = dest;
	while (*dest++ = *scr++)
	{
		;
	}
	return tem;
}
int main()
{
	char arr[] = { "hellow" };
	char arr1[20] = { 0 };
	printf("%s\n",my_strcpy(arr1, arr));
}