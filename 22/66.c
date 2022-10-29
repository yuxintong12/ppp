#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int input = 0;
	int c = 0;
	scanf("%d",&input);
	int i  = 0;
	for(i = 0;i < sz; i ++)
	{
		c = (left + right)/2;
		if(input < arr[c])
		{
			left = c;
		}
		if(input > arr[c])
		{
			right = c;
		}
		else 
		{
			printf("找到了\n");
			break;
		}
		if(left > right)
		{
			printf("找不到了\n");
		}
	}
	return 0;
}