#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//非递归版本
int length(char* p)
{
	int count = 0;
	while (*p++)
	{
		count++;
	}
	return count;
}

//指针减法版本
//int length(char* p)
//{
//	char* p1 = p;
//	while (*p++)
//	{
//		;
//	}
//	return p - p1-1;
//}

//递归版本
//int length(char * p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + length(p - 1);
//	}
//}
int main()
{
	char input[20] = { '0' };
	scanf("%s", input);
	int length_value = length(input);
	printf("%d ", length_value);
	return 0;
}