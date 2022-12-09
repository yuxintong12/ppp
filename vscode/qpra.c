#include <stdio.h>

int main() 
{
    char c = 0;
    scanf("%c",&c);
    int line = 5;
    int i = 0;
    int j = 0;
    for(i = 0;i < line ;i ++)
    {
        for(j = i;j < line-1;j ++)
        {
            printf(" ");
        }
        for(j = 0;j < i + 1; j++)
        {
            if(j > 0)
            {
                printf(" ");
            }
            printf("%c",c);
        }
         for(j = i;j < line-1;j ++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}