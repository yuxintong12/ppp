#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i = 12;
    int x = 0;

    /*freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);*/
    FILE* in = fopen("in.txt", "rb");
    FILE* out = fopen("out.txt", "wb");

    for (i = 12; i >0; i--)
    {

        
        fscanf(in,"%d", &x);
        fgetc(in);
        fprintf(out,"%c", x);


    }
    fclose(in);
    fclose(out);
    return 0;
}
    
