#define _CRT_SECURE_NO_WARNINGS 1
#include<errno.h>
#include<string.h>
#include<stdio.h>
int main()
{
    freopen("777.txt", "r", stdin);//在error.h里边而且将对应的错误码放在errno变量里，类型为int型。
    perror("mmm");//它在stdio.h里边
    int a = 0;
    memset(&a, 1, 4);
    printf("%s\n", strerror(errno));
    return 0;
}