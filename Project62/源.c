#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int test(int* p, int p)
{

}
int main()
{
    int i = 0;
    srand((unsigned int)time(NULL));
    int a = -1;
    int b = 29;
    int count = 0;
    test(&a, a);

   /* for (i = 0; i < 32; i++)
    {

        if ((a >> i) & 1)
        {
            count++;
        }
    }*/
    while (a)
    {
        a = a & (a - 1);
        count++;
    }
    return 0;
}