#define _CRT_SECURE_NO_WARNINGS 1
#include "ga.h"
void game()
{
	char pl[HA][LL] = { '0' };
	char sh[HA][LL] = { '0' };
	st(pl, HA, LL,'0');
	st(sh, HA, LL,'*');
	pp(pl, HAS, LLS);
	pp(sh, HAS, LLS);
	//放雷
	put(pl, HAS, LLS,LI);
	pp(pl, HAS, LLS);
	//玩家查找
	search(pl,HAS,LLS,sh);
	pp(pl, HAS, LLS);
	

}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		pr();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入非法\n");
			break;
		}

	} while (input);

}