#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int arr[26] = { 0 };
    char i = 0;
    int j = 0;
    int te = 0;
    while (i = getchar()  != '\n')
    {
        arr[i - 'a'] ++;
    }
    int max = 0;
    for (j = 0; j < 26; j++)
    {
        if (max < arr[j])
        {
            max = arr[j];
            te = j;
        }
    }
    printf("%c", te + 97);
    printf("%d", max);
    return 0;
}