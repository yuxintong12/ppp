#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//二变量交换法，操作符
 void change(int * pa,int * pb)
 {
	 *pa = *pa ^ *pb;
	 *pb = *pb ^*pa;
	 *pa = *pa  ^*pb;
 }
//二变量交换，加减法
 /*void change(int * pa,int * pb)
 {
	 *pa = *pa + *pb;
	 *pb = *pa - *pb;
	 *pa = *pa - *pb;
 } */
//常规三变量交换
//void change(int* pa, int* pb)
//{
//	int te = 0;//建立交换临时变量
//	te = *pa;//将a变量的值储存在te中
//	*pa = *pb;//将b的值放在a中
//	*pb = te;//将te中储存的a的值放在b中
//}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d,%d", &a, &b);
	change(&a, &b);
	printf("%d,%d", a, b);
	return 0;
}