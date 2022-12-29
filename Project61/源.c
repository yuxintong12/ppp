#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n = 0;
    scanf_s("%d", &n);
    getchar();
    int flag1 = 0;
    int flag2 = 0;
    int i = 0;
    int flag3 = 0;
    int judge = 1;
    int a = 0;
    int b = 0;
    int c = 0;
    char ch[101] = { 0 };
    while (n)
    {
        n--;
        gets(ch);
        int sz = strlen(ch);
        for (i = 0; i < sz; i++)
        {
            if (isdigit(ch[0]))
            {
                judge = 0;
                break;
            }
            else
            {
                if (isdigit(ch[i]))
                {
                    flag1 = 1;
                    a++;
                }
                else if (islower(ch[i]))
                {
                    b++;
                    flag2 = 1;

                }
                else if (isupper(ch[i]))
                {
                    flag3 = 1;
                    c++;
                }
                if (!isalnum(ch[i]))
                {
                    judge = 0;
                    break;
                }
            }
        }
        if (flag1 + flag2 + flag3 >= 2 || sz >= 8)
        {
            judge = 1;
        }
        else {
            judge = 0;
        }
        if (!judge)
        {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}