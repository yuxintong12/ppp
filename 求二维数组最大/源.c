#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void change(int arr[3][4],int i ,int j )
{
	int te = 0;
	te = arr[i][j];
	arr[i][j] = arr[i + 1][j + 1];
	arr[i + 1][j + 1] = te;
}
void change(int)
void de(int arr[3][4])
{
	int i = 0;
	int j = 0;
	int c = 0;
	while (i < 3)
	{
		for (j = 0; j < 3; j++)
		{
			for (c = 0; c < 3 - j; c++)
			{
				if (arr[i][j] < arr[i + 1][j + 1])
				{
					
					change(arr, i, j);

				}
			}
		}
		i++;
	}
	for (i = 0; i < 2; i++)
	{
		if (arr[i][3] >arr[i +1][3])
		{
			for (j = 0; j < 4; j++)
			{
				
			}
		}
	}
}
int main()
{
	int arr[3][4] = { {2,3,6,5},{6,5,4,9},{9,6,8,7} };
	de(arr);
}