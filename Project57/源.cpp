#define _CRT_SECURE_NO_WARNINGS 1
#include<easyx.h>
#include<windows.h>
int main()
{
	initgraph(300, 600);
	circle(3, 2, 60);
	system("pause");
	closegraph();
	return 0;
}