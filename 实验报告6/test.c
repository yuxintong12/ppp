#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;//整型变量的创建，整形的大小为4个字节，用printf输出需要%d
			//scanf输入的话需要%d，（并且在输入时也有小技巧%nd可以控制输入多少位）
	        //例如scanf("%4d",&i),如果输入12345，就会读取1234
	float b = 0;//float也是四个字节，如若输出的话要用%f可以通过改变f前的系数来控制输出
	double c = 0;//double是八个字节
	char ch = '0';
	printf("请输入a,b,c,ch的值：");
	scanf("%d,%f,%lf,%c", &a, &b, &c, &ch);
	printf("a=%d,b=%f,c=%lf,ch=%c", a, b, c, ch);
	putchar('\n');
	return 0;
}
