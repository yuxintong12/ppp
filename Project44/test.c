#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<math.h>
int main()
{
	int n = 0;
	printf("请输入项数:>");
	scanf("%d",&n);
	int x = 0;
	printf("请输入首项:>");
	scanf("%d", &x);
	int i = 0;
	int m = 0;
	int xn = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		xn += x * pow(10, i);
		sum += xn;
	}
	printf("%d\n", sum);
	return 0;


}