#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<ctime>
#include<cstdlib>
using namespace std;
void pr()
{
    printf("***********\n");
    printf("* 1������ *\n");
    printf("* 2���˳� *\n");
    printf("***********\n");
}
void game()
{
    int d = rand() % 100 + 1;
    int a = 0;
    while (1)
    {
        printf("�����룺\n");
        scanf("%d", &a);
        if (a == d)
        {
            printf("�¶���\n");
            break;
        }
        else if (a > d)
        {
            printf("�´���\n");

        }
        else if (a < d)
        {
            printf("��С��\n");
        }
        else printf("����\n");


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
            printf("�˳���Ϸ\n");
            break;
        case 1:
            printf("������\n");
            game();

            break;
        default:
            printf("�������\n");
            break;
        }


    } while (input);
    return 0;
}
