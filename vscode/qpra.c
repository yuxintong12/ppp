#include <stdio.h>

int main() 
{
    int x = 0;
    char c = 0;
    while( c != '\n')
    {
        scanf("%d",&x);
        c = getchar();
        printf("%c",x);
       
    }
    return 0;
}