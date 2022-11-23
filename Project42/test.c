#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	/*此问题也可以升级进而改编成输入n位数输入，只不过需要malloc函数进行动态内存分配
	* 当然从算法层面上也可以用递归实现，不断剥离的的效果，并且将每位数依次放入，再用
	* for循环嵌套进行数的组合，然后可以用if语句进行判断输出判断
	*/
	int i = 100;
	for (i = 100; i <= 999; i++)
	{
		int m, c, n;
		int j = 0;
		m = i % 10;
		c = i / 10 % 10;
		n = i / 100 % 10;
		j = pow(m, 3) + pow(c, 3) + pow(n, 3);/*组合每位数，这样写的话会把程序写死的要增加更多可能性
												*也要有意识的封装函数，进行优化
												*/

		if (j == i)
		{
			printf("%d\n", i);//输出换行
		}
	}
	return 0;
}
