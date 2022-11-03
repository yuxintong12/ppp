#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* string)/*这种是递归的实现方法，尽量用不同的方法实现一下
							诸如：指针减法，循环语句计数器，一定要解决指针传参问题
							地址自加和+=1一样
							*/
{
	if (*string != '\0')
	{
		return 1 + my_strlen(string + 1);
	}
	else
		return 0;
}

void reverse_string(char* string)//主题思想与插入排序用值覆盖思想类似
{
	char* left = string;//记录换位时的最左边的地址
	char* right = string + my_strlen(string) - 1;/*记录换位时右边的地址两者结合起来就形成了每次调用左右
													向中间靠拢的效果*/
	char tmp = *left;//用变量储存被覆盖的值
	*left = *right;//用任意交换的值进行覆盖
	*right = '\0';//为判断条件my_strlen的结尾随着函数的“递”的调用right也在不断变化
				//所以strlen的终点也不断前移动直到某个时候与左边的重合或者是交错，所以
	            //递归结束的条件会出来了
	if (my_strlen(string) > 1)/*
								1.当左右交错的时候my_strlen的终点就移动到了左边可以使得my_strlen
		                       返回值就会算出-1
							   2.当左右重合的时候my_strlen的起点和终点重合返回值得到1
							   */
		reverse_string(string ++);
	*right = tmp;
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
