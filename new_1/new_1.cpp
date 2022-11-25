#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	 //输入钱数
	int mon = 0;
	printf("你要来一杯么:>");
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
		//一旦空瓶满两个就兑换一个，饮料就加一空瓶清零
		if (dot % 2 == 0)
		{
			dri++;
			dot -= 1;
		}
	}
	printf("你总共喝了:>%d\n", dri);
	return 0;
}