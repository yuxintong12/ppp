#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
int main()
{
	int n = 0;
	scanf("%d",&n);
	int* p = (int*)malloc(sizeof(int)*n);
	int j = 0;
	int m = 0;
	for(j = 0;j < n;j ++)
	{
		scanf("%X",&m);
		*(p + j) = m;
	}
	for(j = 0;j < n;j ++)
	{
		printf("%o\n",*(p + j));
	}
	return 0;
}