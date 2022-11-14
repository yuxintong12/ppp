#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun(char* p)
{
	int n = 0;
	while (*p)
	{
		if (( * p >= 65 && *p <= 90) || ( * p >= 97 && *p <= 122))
		{
			n++;
		}
		p++;
	}
	return n;
	
}
int main()
{
	char ch[20] = { '0' };
	scanf("%s", ch);
	int num = fun(ch);
	printf("%d ", num);
	return 0;
}