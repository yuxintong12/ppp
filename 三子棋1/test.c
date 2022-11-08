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
void player_move(char arr[HA][LI], int ha, int li)
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
				arr[x - 1][y - 1] = '*';
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
int win(char arr[HA][LI], int ha, int li)
{
	int i = 0;
	int j = 0;
	char compare = arr[i][j];
	int count = 1;
	while(j < li)
	{
		if (count <= 2)
		{
			if (compare == arr[i][j + 1])
			{
				j++;
				count++;
			}
			else if (compare == arr[i + 1][j + 1])
			{
				i++;
				j++;
				count++;
			}
			else if (compare == arr[i + 1][j])
			{
				i++;
				count++;
			}
			else
			{
				j++;
				compare = arr[i][j];
			}
		}
		else
			return compare;

	}
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