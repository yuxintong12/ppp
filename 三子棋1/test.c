#define _CRT_SECURE_NO_WARNINGS 1
#include"gg.h"
void print(int ha, int li, char arr[HA][LI])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ha; i++)
	{
		for (j = 0; j < ha; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < 2)
			{
				printf("|");
			}

		}
		printf("\n");
		if (i < 2)
		{
			for (j = 0; j < li; j++)
			{
				printf("---");
				if (j < 2)
				{
					printf("|");
				}
			}
		}
		printf("\n");

	}
}
void init(char arr[HA][LI], int ha, int li)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ha; i++)
	{
		for (j = 0; j < li; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void player_move(char arr[HA][LI], int ha, int li,char c)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请落子:>");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= ha && y >= 1 && y <= li)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = c;
				break;
			}
			else
			{
				printf("看清楚点\n");
			}
		}
		else
		{
			printf("输入非法,眼睛好好看\n");
		}
	}
}
void com_mov(char arr[HA][LI], int ha, int li)
{
	printf("电脑输入：\n");
	Sleep(1000);
	while (1)
	{
		int x = rand() % ha;
		int y = rand() % li;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}
char win(char arr[HA][LI], int ha, int li, char c)
{
	int i = 0;
	int j = 0;
	int arr1[4] = {0};
	for (i = 0; i < ha; i++)
	{
		//横排
		arr1[1] = 0;

		for (j = 0; j < li; j++)
		{
			if (arr[i][j] == c)
			{
				arr1[1] ++;
			}
			else
				break;
			if (arr1[1] == ZI)
				return c;
		}
	}
	for (j = 0; j < li; j++)
	{  
		arr1[2] = 0;
		for (i = 0; i < ha; i++)
		{
			if (arr[i][j] == c)
			{
				arr1[2] ++;
			}
			
			else
				break;
			if (arr1[2] == ZI)
				return c;
		}
	}
	for (i = 0, j = 0; i < ha && j < li; i++, j++)
	{
		if (arr[i][j] == c)
		{
			arr1[0] ++;
		}
		
		else
			break;
		if (arr1[0] == ZI)
			return c;
	}
	for (i = 0, j = li - 1; j >= 0 && i < ha; i++, j--)
	{
		if (arr[i][j] == c)
		{
			arr1[3] ++;
		}
		
		else
			break;
		if (arr1[3] == ZI)
			return c;
	}
	int sz = sizeof(arr1) / sizeof(arr1[0]);
		if (full(arr, HA, LI) != 0)
		{
			return 'c';
		}
		else
			return 'p';
	
}
int full(char arr[HA][LI], int ha, int li)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ha; i++)
	{
		for (j = 0; j < li; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 1;
			}
		}
	}
	return 0;
}