#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void change(int* p, int* p1,int sz)
{
	while (sz >= 0)
	{
		int te = 0;
		te = *p;
		*p = *p1;
		*p1 = te;
		sz--;
		p++;
		p1++;
	}
}
int main()
{
	int arr[3] = { 1,3,2 };
	int arr1[3] = { 1,6,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	change(arr, arr1,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);

	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);

	}
	return 0;
}