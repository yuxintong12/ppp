#define _CRT_SECURE_NO_WARNINGS 1
#include<easyx.h>
#include<windows.h>
#include<stdio.h>
int main()
{
	initgraph(300, 600);
	circle(3, 2, 60);
	getchar();
	closegraph();
	return 0;
}