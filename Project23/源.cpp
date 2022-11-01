#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<ctime>
#include<cstdlib>
using namespace std;
void pr()
{
    printf("***********\n");
    printf("* 1、进入 *\n");
    printf("* 2、退出 *\n");
    printf("***********\n");
}
void game()
{
    int d = rand() % 100 + 1;
    int a = 0;
    while (1)
    {
        printf("请输入：\n");
        scanf("%d", &a);
        if (a == d)
        {
            printf("猜对了\n");
            break;
        }
        else if (a > d)
        {
            printf("猜大了\n");

        }
        else if (a < d)
        {
            printf("猜小了\n");
        }
        else printf("笨蛋\n");


    }
}


int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        pr();
        scanf("%d", &input);
        switch (input)
        {
        case 0:
            printf("退出游戏\n");
            break;
        case 1:
            printf("猜数字\n");
            game();

            break;
        default:
            printf("输入错误\n");
            break;
        }


    } while (input);
    return 0;
}
