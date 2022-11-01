#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void de(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int min = 0;
	for (i = 0; i < sz - 1;i++)
	{
		min = i;
		for (j = i + 1; j < sz; j++)
		{
			if (arr[i] > arr[j])
			{
				min = j;
			}
		}
		
			int tem = 0;
			tem = arr[i];
			arr[i] = arr[j];
			arr[j] = tem;
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
 	de(arr, sz);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}	
	return 0;
}