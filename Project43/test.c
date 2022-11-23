#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b <= a; b++)//通过for语句循环实现乘数的不断变换
		{
			printf("%d * %d =%-2d ", a, b, a * b);//%-2d可以使得输出结果更加好看
			//即：得数使得一位数和两位数的开头对齐
		}
		printf("\n");
	}
	return 0;
}
