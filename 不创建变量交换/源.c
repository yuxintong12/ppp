#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void change(int* pa, int* pb)
{
	*pa = *pa ^ *pb;
	*pb = *pb ^ *pa;
	*pa = *pa ^ *pb;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d,%d", &a, &b);
	change(&a, &b);
	printf("%d,%d", a, b);
	return 0;
}