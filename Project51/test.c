#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main()
{
	char ch[100];
	gets(ch);
	int i = 0;
	int sz = strlen(ch);
	int c = 0;
	for (i = 0; i < sz; i++)
	{
		if (ch[i] == ' ')
		{
			c++;
		}
	}
	int j = 0;
	int* p = (int*)malloc(sizeof(int) * c);
	for (i = 0; i < sz; i++)
	{
		if (ch[i] == ' ')
		{

			*(p + j) = i;
			j++;
		}
	}
	for (i = 0; i < c; i++)
	{
		ch[*(p + i)] = '\0';
	}
	for (i = c - 1; i > -2; i--)
	{
		if (i >= 0)
		{
			printf("%s ", ch + *(p + i) + 1);
		}
		else
		{
			printf("%s", ch);
		}
	}

	return 0;
}