#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
unsigned int my_strlen(const char * cc)
{
	assert(cc != NULL);
	unsigned int i = 0;
	while (*cc ++ != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char ch[] = {"yuxintong"};
	printf("%u\n", my_strlen(ch));
	printf("%zu\n", strlen(ch));
	return 0;
}