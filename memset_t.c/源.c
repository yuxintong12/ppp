#define _CRT_SECURE_NO_WARNINGS 1
#include<errno.h>
#include<string.h>
#include<stdio.h>
int main()
{
    freopen("777.txt", "r", stdin);//��error.h��߶��ҽ���Ӧ�Ĵ��������errno���������Ϊint�͡�
    perror("mmm");//����stdio.h���
    int a = 0;
    memset(&a, 1, 4);
    printf("%s\n", strerror(errno));
    return 0;
}