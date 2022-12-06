#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int* p = (int*)malloc(sizeof(int) * n);
    int* p1 = (int*)malloc(sizeof(int) * m);
    
    return 0;
}