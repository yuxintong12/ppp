#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char* ch, const char* ch1)
{
	assert(ch && ch1);
	while (*ch && *ch1&& *ch == *ch1)
	{
		ch++;
		ch1++;
	}
	return *ch - *ch1;
}
int main()
{
	char ch1[20] = "kkkkk";
	char ch[20] = "00myll";
	int x = strcmp(ch, ch1 );
	int c = my_strcmp(ch, ch1);
	return 0;
}