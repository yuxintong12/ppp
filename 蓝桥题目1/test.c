#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
void de(int* p, int a)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < a - 1; i++)
	{
		for (j = 0; j < a - 1 - i; j++)
		{
			if (*(p+j) > *(p +j+ 1))
			{
				int t = 0;
				t = *(p+j);
				*(p +j)= *(p +j +1);
				*(p +j+ 1) = t;
			}
		}
	}
}
	int main()
	{
		int a = 0;
		int i = 0;
		scanf("%d", &a);
		int* p = (int*)malloc(a * sizeof(int));
		for (i = 0; i < a; i++)
		{
			scanf("%d",& *(p+i));
		}
		de(p, a);
		int j = 0;
		for (j = 0; j < a; j++)
		{
			printf("%d ", *(p + j));
		}
		return 0;
	}