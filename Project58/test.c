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
void test(int a, int* a)
{

}
int main()
{
	int ch1[20] = { 200,22 };
	int ch[20] = { 52,36 };
	int x = strcmp(ch, ch1 );
	void* p = ch;
	void* p1 = ch1;
	*((char*)p)++ = *((char*)p1)++;
	int a = 0;
	test(a, &a);
	int c = my_strcmp(ch, ch1);
	return 0;
}