#define _CRT_SECURE_NO_WARNINGS 1
#include < stdio.h>
void print(int t)
{
	char c = t;
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		
		 if (i == 0)
		 {
			printf("%d ",(c >> i)&1);
		 }
		 else
		 {
			 printf("%d ", (c >> i) & 1 != 1);

		 }
	}
}
int main()
{
	int i = 0;
	int j = 0;
	int m = 0;
	char t = 0;
	for (i = 0;i < 10;i ++)
	{

		for (j = 0; j < 16; j++)
		{
			for (m = 0; m < 2; m++)
			{
				scanf("%d", &t);
				print(t);
			}
			printf("\n");
		}
		printf("\n");


	}
	return 0;
}