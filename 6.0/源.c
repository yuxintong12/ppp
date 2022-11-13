#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void change(int arr[2][3], int arr1[3][2])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr1[j][i] = arr[i][j];
		}
	}
}
void print(int arr1[3][2])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");

	}
	printf("\n");
}
void print1(int arr[2][3])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");

	}
	printf("\n");

}
int main()
{
	int arr[2][3] = { 1,2,3,5,6,7 };
	int arr1[3][2] = { 0 };
	print1(arr);

	
	change(arr, arr1);
	print(arr1);
}