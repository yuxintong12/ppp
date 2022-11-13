#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int compare(int arr[3][4], int sz)
{
	int max = arr[0][0];
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[i][j] > max)
			{
				int te = 0;
				te = arr[i][j];
				arr[i][j] = max;
				max = te;




			}
		}
	}
	return max;

}
void print(int arr[3][4], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
}
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	int j = 0;
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	int max =compare(arr, sz);
	printf("%d",max);

	return 0;
}