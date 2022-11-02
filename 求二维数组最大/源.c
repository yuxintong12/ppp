#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void de(int arr[], int dz)
{
	int i = 0;
	int j;
	int a = 0;
	for (i = 1; i < dz; i++)
	{
		int te = arr[i];
		int b = i;
		for (j = i - 1; j >= 0; j--)
		{
			if (te < arr[j])
			{
				arr[b] = arr[j];
					b--;
			}
			else
			{
				break;
			}
		}
		arr[b] = te;
	}
}
int main()
{
	int arr[10] = { 2,3,4,5,6,7,8,9,10,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	de(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}