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
	for (i = 0; i < ha; i++)
	{
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
	int arr[2] = { 0 };
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
}
void line(char ch[HA][LI], int* p1, int ha, int li, int* p)
{
	int i = 1;
	int j = 1;
	int x = p[0];
	int y = p[1];
	int flag = 1;
	int flag1 = 1;
	while ((flag||flag1) && *p1 != 5)
	{
		if ((ch[x + i][y] == ch[x][y]) && flag)
		{
			*p1 = *p1 + 1;
			i++;
		}
		else
		{
			flag = 0;
		}
		if (ch[x - j][y] == ch[x][y] && flag1)
		{
			*p1 = *p1 + 1;

			j++;
		}
		else
		{
			
			flag1 = 0;
		}
	}
}
void l_lie(char ch[HA][LI], int* p1, int ha, int li, int* p)
{
	int i = 1;
	int j = 1;
	int x = p[0];
	int y = p[1];
	int flag = 1;
	int flag1 = 1;
	while (flag + flag1 != 0 && *p1 != 5)
	{
		if ((ch[x][y + i] == ch[x][y]) || flag)
		{
			*p1 = *p1 + 1;

			i++;
		}
		else
		{
			flag = 0;
		}
		if (ch[x][y - j] == ch[x][y] || flag1)
		{
			*p1 = *p1 + 1;

			j++;
		}
		else
		{
			flag1 = 0;
		}
	}
}
void f_line(char ch[HA][LI], int* p1, int ha, int li, int* p)
{
	int i = 1;
	int j = 1;
	int x = p[0];
	int y = p[1];
	int flag = 1;
	int flag1 = 1;
	while (flag + flag1 != 0 || *p1 != 5)
	{
		if ((ch[x - i][y + i] == ch[x][y]) || flag)
		{
			*p1 = *p1 + 1;

			i++;
		}
		else
		{
			flag = 0;
		}
		if (ch[x + j][y - j] == ch[x][y] || flag1)
		{
			*p1 = *p1 + 1;

			j++;
		}
		else
		{
			flag1 = 0;
		}
	}
}
void r_right(char ch[HA][LI], int* p1, int ha, int li, int* p)
{
	int i = 1;
	int j = 1;
	int x = p[0];
	int y = p[1];
	int flag = 1;
	int flag1 = 1;
	while (flag + flag1 != 0 || *p1 != 5)
	{
		if ((ch[x - i][y - i] == ch[x][y]) || flag)
		{
			*p1 = *p1 + 1;

			i++;
		}
		else
		{
			flag = 0;
		}
		if (ch[x + j][y + j] == ch[x][y] || flag1)
		{
			*p1 = *p1 + 1;

			j++;
		}
		else
		{
			flag1 = 0;
		}
	}
}
int is_full(char ch[HA][LI], int ha, int li)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ha; i++)
	{
		for (j = 0; j < li; j++)
		{
			if (ch[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char win_char(char ch[HA][LI], int ha, int li, int* p)
{
	int i = 0;
	int arr[4] = { 0 };
	static void (*ch1[4])(char[HA][LI], int*, int, int, int*) = { line ,l_lie,f_line ,r_right };
	for (i = 0; i < 4; i++)
	{
		ch1[i](ch, arr + i, HA, LI, p);
		if (arr[i] == 5)
		{
			return ch[p[0]][p[1]];
		}
	}
	if (is_full(ch,HA,LI))
	{
		return 'c';
	}
	else
	{
		return 's';
	}
}
char is_win(char ch[HA][LI], int ha, int li,int * p)
{
	char judge1 = win_char(ch, ha, li,p);
	switch (judge1)
	{
	case '*':
		printf("你赢了\n");
		return judge1;
		break;
	case'#':
		printf("你输了\n");
		return judge1;

		break;
	case's':
		printf("打平了\n");
		return judge1;

		break;
	default:
		printf("请继续\n");
		return judge1;
		break;
	}
}
int* computer_move(char ch[HA][LI], int ha, int li)
{
	my_judge(ch, HA, LI);
}
int* my_judge(char ch[HA][LI], int ha, int li)
{
	int i = 0;
	int j = 0;
	char ch1[HA][LI] = { 0 };
	strcpy(ch1, ch);
	for (i = 0; i < ha; i++)
	{
		for (j = 0; j < li; j++)
		{
			if (ch1[i][j] == ' ')
			{
				ch1[i][j] = '#';
			}
		}
	}
	int scr[HA][LI] = { 0 };

}


