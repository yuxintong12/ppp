#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
	scanf("%d %d %d",&a,&b,&n);
	int i = 0;
	int j = 0;
	int count = 0;
	while (1)//ÿ�첻ͣ������
	{
		for (i = 0; i < 5; i++)
		{
			n -= a;
			count++;
			if (n <= 0)//һ�������������������ڵ���Ҫ���ľ�������
			{
				goto t;
			}
		}
		for (j = 0; j < 2; j++)
		{
			n -= b;
			count++;//������
			if (n <= 0)
			{
				goto t;
			}
		}
	}
t :
	printf("%d",count);
	return 0;
}