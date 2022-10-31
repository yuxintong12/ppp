#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>

int main()
{
    int n = 0;
    printf("请输入n个整数中的n是:");
    scanf("%d", &n);
    int* p;
    int i = 0;
    int m = 0;
    p = (int*)malloc(n * sizeof(int));  //因不知输入的数据量 所以不能类似int a[n]的声明
    printf("请输入一组数据 容量为%d:\n", n);
    for (; i < n; i++)
    {
        scanf("%d", &m);
        *(p + i) = m;
    }
    //对于输入的数据 进行首尾交换
    int tmp;
    i = 0;
    m = n - 1;
    while (i <= m)
    {
        tmp = *(p + i);
        *(p + i) = *(p + m);
        *(p + m) = tmp;
        i++;
        m--;
    }
    //对逆置后的数据进行输出
    i = 0;
    for (; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    free(p);
    return 0;
}