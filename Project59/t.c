#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include<stdio.h>
int cmp(const void* p, const void* p1)
{
    return (int)*(char*)p - (int)*(char*)p1;
}
int main()
{
    char ch[10] = { "987524136" };
    int sz = sizeof(ch) / sizeof(ch[0]);
    qsort(ch, sz, sizeof(ch[0]), cmp);
    printf("%s", ch);
    return 0;
}