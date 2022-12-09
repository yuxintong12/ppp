#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int i = 12;
    int x = 0;

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    for (i = 12; i > 0; i--)
    {

        
        scanf("%d", &x);
        getchar();
        printf("%c", x);


    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
    
