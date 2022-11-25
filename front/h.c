#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void sort(int* p, int x)
{
	//记录移动点的下标变量
	int j = 0;
	int i = 0;
	for (i = 0; i < x; i++)
	{
		if (*(p + i) % 2 != 0)
		{
			if (i != j)
			{
				int te = 0;
				te = *(p + j);
				*(p + j) = *(p + i);
				*(p + i) = te;
			}
			j++;
		}
	}
}
int main()
{
	int arr[11] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}