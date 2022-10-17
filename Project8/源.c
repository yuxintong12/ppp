#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#define part 3
int main()
{
	int input;
	scanf("%d", &input);
	int i;
	int sum = 0;
	int arr[part] = { 0 };
	int x;
	for (i = part - 1; i >= 0; i--)
	{
		x = input % 10;
		arr[i] =  x ;
		input /= 10;
	}
	for (i = 0; i < part; i++)
	{
		sum += (int)arr[i] * pow(10, i);
	}
	printf("%d", sum);
	return 0;
}