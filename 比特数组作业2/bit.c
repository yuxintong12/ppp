#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void reverse(int* p,int sz)
{
	int *left = p;
	int* right = p + sz - 1;
	while (left < right)
	{
		int te = 0;
		te = *left;
		*left = *right;
		*right = te;
		left++;
		right--;
	}

	
}
void print(int* p,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%-2d ", *(p + i));
	}
	printf("\n");
}
void init(int* p,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		*(p + i) = 0;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr,sz);
	print(arr,sz);
	init(arr,sz);
	print(arr,sz);
}