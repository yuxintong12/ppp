#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int cap(void* a1, void* a2)
{
	return *(int*)a1 - *(int*)a2;
}
void change(char* p2, char* p3,int wd)
{
	int i = 0;
	for (i = 0; i < wd; i++)
	{
		char te = 0;
		te = *p2;
		*p2 = *p3;
		*p3 = te;
		p2++;
		p3++;
	}
}
void qsort1(void* p, int sz, int wd, int(*p1)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (p1((char*)p + j * wd, (char*)p + (j + 1) * wd) > 0)
			{
				change((char*)p + j * wd, (char*)p + (j + 1) * wd,wd);
			}
		}
	}
}
int main()
{
	int arr[10] = { 3,2,1,6,9,8,7,5,4,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort1(arr, sz, sizeof(arr[0]), cap);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}