#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int x)
{
	char j = x;
	j = ~j;
	j += 1;
	int m = 0;
	for (m = 8; m > 0; m--)
	{
		
		if (m < 8)
		{
			if (((x >> m) & 1) == 0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		else
		{
			printf("1");
		}
	}
}
void print1(int x)
{
	
	int m = 0;
	for (m = 8; m > 0; m--)
	{

		if (((x >> m) & 1) == 0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		
	}
}
int main()
{
	int i = 0;
	int j = 0;
	int r = 0;
	int a = 0;
	char b = 0;
	freopen("D:\\×ÀÃæ\\in.txt", "r", stdin);
	freopen("D:\\×ÀÃæ\\out.txt", "w", stdout);
	for (i=  0; i < 10; i++)
	{
		for (j = 0; j < 16; i++)
		{
			for (r = 0; r < 2; r++)
			{
				scanf("%d", &a);
				if (a < b)
				{
					print(a);
				}
				else
				{
					print1(a);
				}

			}
			printf("\n");
		}
		printf("\n");
		printf("\n");

	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}