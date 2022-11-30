#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* scr)//char*返回值可以使得此函数能够当作其他函数的参数并且const可以增加函数的健壮性使得来源
											//数组不发生改变
{
	assert(dest && scr);//判断两个传入的指针不是空指针，使得函数可以可以针对空指针报错在调试的时候更好确定错误
	char* ret = dest;//记录目的数组地址即返回参数
	while (*dest++ = *scr++)//在复制的同时可以根据表达式的值来判断循环进行与否
	{
		;
	}
	return ret;
}
int main()
{
	char ch[10] =  "123456789" ;
	char ch1[10] =  "*********" ;
	printf("字符一：%s\n", ch);
	printf("字符二：%s\n", ch1);
	printf("处理后字符：%s\n", my_strcpy(ch, ch1));
	return 0;
}