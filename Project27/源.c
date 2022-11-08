#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int te = 0;
				te = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = te;
			}
		}
	}
}
int main()
{
	int arr[10] = { 10,9,3,5,4,6,7,2,1,8};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	bubble(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}