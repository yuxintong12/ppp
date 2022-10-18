#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char input = 0;
	char put;
	while ((input = getchar()) != EOF)
	{
		put = input - 32;
		putchar(put);
		putchar('\n');
	}
	return 0;

}