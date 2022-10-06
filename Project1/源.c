#define _CRT_SECURE_NO_WARNINGS 1
#include "mm.h"
void pp(char ch[HA][LI], int ha, int li)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ha;i ++)
	{
		for (j = 0; j < li; j++)
		{
			printf(" %c ", ch[i][j]);
			if (j < li - 1)
			{
				printf("|");
			}

		}
		printf("\n");
		if (i < ha - 1)
		{
			for (j = 0; j < li; j++)
			{
				printf("---");
				if (j < li - 1)
				{
					printf("|");
				}
			}
			
		}
		printf("\n");
	}
}
void ta(char ch[HA][LI], int ha, int li)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ha; i++)
	{
		for (j = 0; j < li; j++)
		{
			ch[i][j] = ' ';
		}
	}
}
void player(char ch[HA][LI], int ha, int li)
{
	while(1)
	{
	printf("ÇëÊäÈë£º");
	int x, y;
	scanf("%d,%d", &x, &y);
	
	
		if (ch[x - 1][y - 1] == ' ')
		{
			ch[x - 1][y - 1] = '*';
			break;
		}
		else
			printf("¿´´íÁË\n");
	}
}
char who(char ch[HA][LI], int ha, int li)
{
	int i;
	for (i = 0; i < HA; i++)
	{
		if (ch[i][0] == ch[i][1] && ch[i][1] == ch[i][2] && ch[i][1] != ' ')
		{
			return ch[i][1];
		}
		if (ch[0][i] == ch[1][i]&& ch[1][i] == ch[2][i]&&ch[1][i] != ' ')
		{
			return ch[1][i];
		}
	}
	if (ch[0][0] == ch[1][1] && ch[1][1] == ch[2][2] && ch[1][1] != ' ')
	{
		return ch[1][1];
	}
	else if (ch[0][2] == ch[1][1] && ch[1][1] == ch[2][0] && ch[2][0])
	{
		return ch[1][1];
	}
	int m = full(ch, HA, LI);
	if (m != 0)
	{
		return 'p';
	}
	else return 'c';
}
void com(char ch[HA][LI], int ha, int li)
{
	int x = rand() % 3;
	int y = rand() % 3;
	while (1)
	{
		if (ch[x][y] != ' ')
		{
			ch[x][y] = '#';
			break;
		}
	}
}
int full(char ch[HA][LI], int ha, int li)
{
	int i,j;
		for (i = 0; i < ha; i++)
		{
			for (j = 0; j < li; j++)
			{
				if (ch[i][j] == ' ')
					return 0;
			}
		}
		return 1;
}