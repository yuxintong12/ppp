#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int  mi(int x, int y)
{
	x *= x;
	if (y == 1)
	{
		mi(x, y - 1);
	}
	return x;
}
int main()
{
	int a = 0;
	int b = 0;
	int output = 0;
	printf("�������:\n");
		scanf("%d", &a);
		printf("������ָ��:\n");
		scanf("%d", &b);
		output = mi(a, b);
		printf("%d��%d�η��Ľ���ǣ�\n%d",a,b, output);
		return 0;
}