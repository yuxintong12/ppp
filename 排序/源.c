#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void bubble(int arr[], int sz)
{
	int i, j;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i;j ++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int i = 0;
	int arr[3] = { 0 };
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	int sz;
	sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr,sz);
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}