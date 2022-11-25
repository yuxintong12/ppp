#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	 //输入钱数
	int mon = 0;
	scanf("%d", &mon);
	//创建空瓶变量
	int dot = 0;
	//创建饮料变量
	int dri = 0;
	//模拟购买流程，即——
	while (mon)
	{
		dot++;
		dri++;
		mon--;
		if (dot % 2 == 0)
		{
			dri++;
			dot -= 2;
		}
	}
	printf("%d", dri);
	return 0;
}