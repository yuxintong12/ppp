#define _CRT_SECURE_NO_WARNINGS 1
#include"fun.h"
void init(char ch[HA][LI], int ha, int li)
{
	int j = 0;
	int i = 0;
	for (i = 0; i < ha; i++)
	{
		for (j = 0; j < li; j++)
		{
			ch[i][j] = ' ';
		}
	}
}
void print_bord(char ch[HA][LI], int ha, int li)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= li; i++)
	{
		printf("%d", i);
	}
	for (i = 0; i < ha; i++)
	{
		printf("%d", i + 1);
		for (j = 0; j < li; j++)
		{
			printf(" %c ", ch[i][j]);
			if (j < ha - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < ha - 1)
		{
			
			for (j = 0; j < li; j++)
			{
				printf("--- ");
			}
			printf("\n");
		}
	}
}
int* player_move(char bord[HA][LI], int ha, int li)
{
	int x = 0;
	int y = 0;
	int arr[2] = 0;
	while (1)
	{
		printf("请下棋:>");
		scanf(" %d,%d", &x, &y);
		if (x && y)
		{
			if (bord[x - 1][y - 1] != ' ')
			{
				printf("看清楚\n");

			}
			else
			{
				bord[x - 1][y - 1] = '*';
				arr[0] = x - 1;
				arr[1] = y - 1;
				return arr;
				break;
			}
		}
		else
		{
			printf("hi！bro想好再下\n");
		}
	}
}void is_win(char ch[HA][LI], int ha, int li,int * p)
{
	char judge1 = win_char(ch, ha, li,p);
}
void 
char win_char(char ch[HA][LI], int ha, int li,int *p)
{
	int x = p[0];
	int y = p[1];
	int arr[4] = { 0 };
	void (*ch1[4])(char *) ={}
	check(arr,)
}