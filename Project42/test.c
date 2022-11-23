#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int check(int x)
{
	if (x > 1)
	{
		return x * check(x - 1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	/*int n, m, i;*/
	int i = 0;
	printf("请输入：");
	scanf("%d", &i);
	//递归实现办法
	int c = check(i);
	/*m = 2;*/
	//非递归实现办法
	//for (n = 1; m < i + 1; m++)
	//{
	//	n = n * m;
	//	//这是较为简单的实现办法，也可以用递归实现
	//}
	printf("阶乘为：%d", c);
	return 0;

}
