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
void print(char ch[HA][LI], int ha, int li)
{
	int i = 0;
	int j = 0;
	printf("-----ɨ��-----\n");
	for (i = 0; i < ha; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i < ha; i++)
	{
		printf("%d ", i);
		for (j = 1; j < li; j++)
		{
			printf("%c ", ch[i][j]);
		}
		printf("\n");
	}
	printf("-----ɨ��-----\n");

}
void put(char ch[HAS][LIS], int ha, int li)
{
	int new = NEW;//newΪ����10

	while (new > 0)
	{
		
		int x = rand() % ha + 1;
		int y = rand() % li + 1;
		if (ch[x][y] == '0')
		{
			ch[x][y] = '1';
			new --;
		}
		
	}//Ϊʲô����while�����Ͼͻ��ٷ�һ������
}
int play_remove(char de[HA][LI], char show[HA][LI], int ha, int li)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		if (show[x][y] == '0')
		{
			continue;
		}
		printf("�뿪ʼ����\n");
		printf("��������������ų�:>\n");
		scanf("%d,%d", &x, &y);
		getchar();
		if (x >= 1 && x <= ha && y >= 1 && y <= li)
		{
			if (de[x][y] == '1')
			{
				printf("�˺��ˣ���ը���˰ɣ�\n");
				show[x][y] = '$';
				break;
			}
			else
			{
				change(show, de, ha, li, x, y);
				break;
			}


		}
		else
		{
			printf("������Ͳ������񲻺�\n");
		}
	}
}
int search(char ch[HA][LI], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i < x + 1; i++)
	{
		for (j = 0; j < y; j++)
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
void change(char show[HA][LI], char de[HA][LI], int ha, int li,int x,int y)
{
	char c = search(de, x, y);
	static int i = -1;
	static int j = 0;
	if (show[x][y] != '*' )    
	{
		if (i = -1)
		{
			i++;
			change(show, de, ha, li, x + i, y + i);
		}
		else
		{
			if (j < )
	}
	else
	{
		if (c == 0)
		{
			show[x][y] = ' ';
			if (i = -1)
			{
				i++;
				change(show, de, ha, li, x + i, y + i);
			}
			else
			{
				if(j <)
			}
		}
		else
		{
			show[x][y] = c;
		}
	}
}