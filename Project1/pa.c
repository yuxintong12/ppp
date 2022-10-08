#define _CRT_SECURE_NO_WARNINGS 1
#include"ga.h"
void pr()
{
	printf("*****************\n");
	printf("****  1.play ****\n");
	printf("****  0.exit ****\n");
	printf("*****************\n");
}
void st(char arr[HA][LL], int ha, int ll, char fu)
{
	int i = 0;
	int j = 0;
		for (i = 0; i < ha; i++)
		{
			for (j = 0; j < ll; j++)
			{
				arr[i][j] = fu;
			}
		}
}
void pp(char arr[HA][LL], int has, int lls)
{
	int i, j;
	for (i = 0; i <= has; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= has ; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= lls; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}
void put(char arr[HA][LL], int has, int lls,int li)
{
	int x, y;
	int i = 0;
	while(i != 10)
	{
		x = rand() % has + 1;
		y = rand() % lls + 1;
			
				if (arr[x][y] == '0')
				{
					arr[x][y] = '1';
					i++;
				}
	}

}
char you(int x, int y, char pl[HA][LL])
{
	int i, j;
	int m = 0;
	for (i = -1; x += i; i++)
	{
		for (j = -1; y += j; j++)
		{
			if (pl[x][y] == '1')
			{
				m++;
			}
		}
	}
	return m + '0';
}
void ti( int x, int y,char pl[HA][LL], char sh[HA][LL])
{
	char mm = you(x, y, pl);
	sh[x][y] = mm;
}
void search(char pl[HA][LL], int has, int lls,char sh[HA][LL])
{
	int x, y;
	while (1)
	{
		printf("输入坐标：\n");
		scanf("%d,%d", &x, &y);
		if (x > HAS || y > LLS)
		{
			printf("输入错误，非法，请重新输入\n");
		}
		else if(x <= HAS&&x >= 1&&y <= HAS&&y >= LLS)
		{
		if (pl[x][y] == '1')
		{
		printf("好可惜，你炸了\n");
		break;
		}
		else if (pl[x][y] == 0)
		{
			printf("好吧兄弟，你继续\n");
			ti(x, y, pl, sh);
			
		}
		}
	}
}

