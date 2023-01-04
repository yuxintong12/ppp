#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void check(char* p, char* p1, char* p3,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (p[i] == p1[i] && p[i] >= 'A' && p1[i] <= 'Z')
		{
			p3[i] = p[i];
		}
	}
}
int main()
{
	char a[5] = { 0,'B','A',0,0 };
	char b[5] = { 0,'B',0,'E',0 };
	char c[5] = { 'C','D',0,0,0 };
	char d[5] = { 0,0,'D',0,'C' };
	char e[5] = { 'A',0,0,'E',0 };
	char right[5] = { 0 };
	int sz = sizeof(a) / sizeof(a[0]);
	check(a, b, right,sz);
	check(c, d, right,sz);
	check(d, e, right,sz);
	return 0;
}