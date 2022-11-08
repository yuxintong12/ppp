#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void play()
{
	int x, y;
	char Board[H_max][L_max];
	clear(Board, H_max, L_max);
	printboard(Board, H_max, L_max);
	while (1)
	{
		printf("请输入要下的坐标>");
		scanf("%d%d", &x, &y);
		if (x > H_max || y > L_max)
		{
			printf("坐标输入错误！请输入x(1,%d) y(1,%d)\n", H_max, L_max);
			continue;
		}
		if (Board[x - 1][y - 1] != ' ')
		{
			printf("坐标输入错误！请选择没下过的位置\n");
			continue;
		}

		putBoard(Board, '*', x - 1, y - 1);
		printboard(Board, H_max, L_max);
		if (isWin(Board, H_max, L_max) == '*')
		{
			printf("恭喜获胜！\n");
			return;
		}
		if (isFulled(Board, H_max, L_max))
		{
			printf("平局！\n");
			return;
		}
		computerplay(Board, H_max, L_max);
		printboard(Board, H_max, L_max);
		if (isWin(Board, H_max, L_max) == '#')
		{
			printf("您输了！\n");
			return;
		}
		if (isFulled(Board, H_max, L_max))
		{
			printf("平局！\n");
			return;
		}


	}

}
void clear(char board[H_max][L_max], int H, int L)
{
	for (int i = 0; i < H; i++)
		for (int j = 0; j < L; j++)
			board[i][j] = ' ';
}
void printboard(char board[H_max][L_max], int H, int L)
{
	for (int j = 0; j < L; j++)
	{
		printf(" ---");

	}
	printf("\n");

	for (int i = 0; i < H; i++) {
		printf("|");
		for (int j = 0; j < L; j++)
		{
			printf(" %c ", board[i][j]);
			printf("|");
		}
		printf("\n");
		if (i < H)
			for (int j = 0; j < L; j++)
			{
				printf(" ---");

			}
		printf("\n");
	}

}
void printmenu()
{
	puts("1:玩  2：退出");

}
void computerplay(char board[H_max][L_max], int H, int L)
{
	int x, y;
	search(board, &x, &y, H, L, '#', '*');
	printf("电脑下！%d,%d\n", x + 1, y + 1);
	putBoard(board, '#', x, y);

}
void search(char board[H_max][L_max], int* X, int* Y, int H, int L, char ch, char ch2)
{
	//尝试获胜
	for (int i = 0; i < H; i++)
	{
		int count = 0;
		int loc = -1;
		for (int j = 0; j < L; j++)
		{
			if (board[i][j] == ch)
				count++;
			else if (board[j][i] == ' ')
				loc = j;
		}
		if (count == 2 && board[i][loc] == ' ' && loc >= 0)
		{
			puts("尝试行获胜");
			*X = i;
			*Y = loc;
			return;
		}
	}
	for (int i = 0; i < H; i++)
	{
		int count = 0;
		int loc = -1;

		for (int j = 0; j < L; j++)
		{
			if (board[j][i] == ch)
				count++;
			else if (board[j][i] == ' ')
				loc = j;
		}
		if (count == 2 && board[loc][i] == ' ' && loc >= 0)
		{
			puts("尝试列获胜");
			*X = loc;
			*Y = i;
			return;
		}


	}

	//判断对角线
	int loc = -1;
	int findcount = 0;
	for (int i = 0; i < H; i++)
	{
		if (board[i][i] == ch)
		{
			findcount++;
		}
		else if (board[i][i] == ' ')
			loc = i;
	}
	if (findcount == 2 && loc != -1)
	{
		puts("尝试对角线获胜");
		*X = loc;
		*Y = loc;
		return;
	}
	loc = -1;
	findcount = 0;
	for (int i = 0; i < H; i++)
	{
		if (board[i][H - i - 1] == ch)
		{
			findcount++;
		}
		else if (board[i][H - i - 1] == ' ')
			loc = i;
	}
	if (findcount == 2 && loc != -1)
	{
		puts("尝试对角线获胜");
		*X = loc;
		*Y = H - loc - 1;
		return;
	}


	//尝试阻止玩家获胜

	for (int i = 0; i < H; i++)
	{
		int count = 0;
		int loc = -1;
		for (int j = 0; j < L; j++)
		{
			if (board[i][j] == ch2)
				count++;
			else
				loc = j;
		}
		if (count == 2 && board[i][loc] == ' ' && loc >= 0)
		{
			puts("尝试阻止行");
			*X = i;
			*Y = loc;
			return;
		}
	}
	for (int i = 0; i < H; i++)
	{
		int count = 0;
		int loc = -1;

		for (int j = 0; j < L; j++)
		{
			if (board[j][i] == ch2)
				count++;
			else
				loc = j;
		}
		if (count == 2 && board[loc][i] == ' ' && loc >= 0)
		{
			puts("尝试阻止列");
			*X = loc;
			*Y = i;
			return;
		}


	}

	//判断对角线
	loc = -1;
	findcount = 0;
	for (int i = 0; i < H; i++)
	{
		if (board[i][i] == ch2)
		{
			findcount++;
		}
		else if (board[i][i] == ' ')
			loc = i;
	}
	if (findcount == 2 && loc != -1)
	{
		puts("尝试阻止对角线");
		*X = loc;
		*Y = loc;
		return;
	}
	loc = -1;
	findcount = 0;
	for (int i = 0; i < H; i++)
	{
		if (board[i][H - i - 1] == ch2)
		{
			findcount++;
		}
		else if (board[i][H - i - 1] == ' ')
			loc = i;
	}
	if (findcount == 2 && loc != -1)
	{
		puts("尝试阻止对角线");
		*X = loc;
		*Y = H - loc - 1;
		return;
	}

	//随机下
	printf("电脑随便走\n");
	srand((unsigned int)time(NULL));
	while (1)
	{
		int x = rand() % L_max;
		int y = rand() % H_max;
		if (board[x][y] == ' ')
		{
			*X = x;
			*Y = y;
			return;
		}
	}

}
void putBoard(char board[H_max][L_max], char ch, int x, int y)
{
	board[x][y] = ch;

}
char isWin(char board[H_max][L_max], int H, int L)
{

	for (int i = 0; i < H; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return board[i][0];
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
			return board[0][i];
	}

	if (board[0][0] == board[1][1] && board[2][2] == board[1][1])
		return board[0][0];
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
		return board[0][0];



	return ' ';
}
int isFulled(char board[H_max][L_max], int H, int L)
{
	int i, j;
	for (i = 0; i < H; i++)
		for (j = 0; j < L; j++)
			if (board[i][j] == ' ')
				return 0;
	return 1;

}