#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void init(char ch[HAS][LIS], int has, int lis, char c)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < has; j++)
	{
		for (i = 0; i < lis; i++)
		{
			ch[j][i] = c;
		}
	}
}
void print(char ch[HAS][LIS], int ha, int li)
{
	int i = 0;
	int j = 0;
	printf("-----扫雷-----\n");
	for (i = 0; i <= ha; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= ha; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= li; j++)
		{
			printf("%c ", ch[i][j]);
		}
		printf("\n");
	}
	printf("-----扫雷-----\n");

}
void put(char ch[HAS][LIS], int ha, int li)
{
	int new = NEW;//new为常量10

	while (new > 0)
	{
		
		int x = rand() % ha + 1;
		int y = rand() % li + 1;
		if (ch[x][y] == '0')
		{
			ch[x][y] = '1';
			new --;
		}
		
	}//为什么放在while条件上就会少放一个？？
}
int play_remove(char de[HAS][LIS], char show[HAS][LIS], int ha, int li)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		if (show[x][y] == '0')
		{
			continue;
		}
		printf("请开始排雷\n");
		printf("请输入坐标进行排除:>\n");
		scanf("%d,%d", &x, &y);
		getchar();
		if (x >= 1 && x <= ha && y >= 1 && y <= li)
		{
			if (de[x][y] == '1')
			{
				printf("嗨害嗨，被炸死了吧！\n");
				show[x][y] = '$';
				return 0;
				break;
			}
			else
			{
				change(show, de, x, y);
				break;
			}


		}
		else
		{
			printf("哎！年纪不大，眼神不好\n");
		}
	}
}
int search(char ch[HAS][LIS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y+1; j++)
		{
			if (i == x&&j == y)
			{
				continue;
			}
			else
			{
				if (ch[i][j] == '1')
				{
					count++;
				}
			}
		}
	}
	return count;
}
void change(char show[HAS][LIS], char de[HAS][LIS],int x,int y)
{
	char c = search(de, x,y) + '0';
	static int n = 0;
aa:
	if (judge(x,y) == 1)
	{
		if (search(de, x, y) != 0)
		{
			show[x][y] = c;
		}
		else if(show[x][y] == ' ')
		{
			show[x][y] = c;
			goto cc;


		}
		else if(search(de, x, y) == 0)
		{
			show[x][y] = ' ';
		cc:
			if (n == 0)
			{
				n++;
				change(show, de, x - 1, y - 1);
			}
			else if (n <= 3||(n >= 5&&n < 7)||(n >= 8&&n < 10))
			{
				n++;
				change(show, de, x, y + 1);

			}
			else if (n == 4||n == 7)
			{
				n++;
				y = 1;
				change(show, de, x + 1, y );
			}
			
		}
	}

}
int judge(int x, int y)
{
	if (x <= HA && y <= LI && x >= 0 && y >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int check(char show[HAS][LIS], int ha, int li)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < ha; i++)
	{
		for (j = 0; j <= li; j++)
		{
			if (show[i][j] == '*')
			{
				return 0;
			}
		}
	}
	return 1;
}