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
	while (1)//每天不停的做题
	{
		for (i = 0; i < 5; i++)
		{
			n -= a;
			count++;
			if (n <= 0)//一旦今天能做的题量大于等于要做的就跳出来
			{
				goto t;
			}
		}
		for (j = 0; j < 2; j++)
		{
			n -= b;
			count++;//数天数
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