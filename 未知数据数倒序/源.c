#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>

int main()
{
    int n = 0;
    printf("������n�������е�n��:");
    scanf("%d", &n);
    int* p;
    int i = 0;
    int m = 0;
    p = (int*)malloc(n * sizeof(int));  //��֪����������� ���Բ�������int a[n]������
    printf("������һ������ ����Ϊ%d:\n", n);
    for (; i < n; i++)
    {
        scanf("%d", &m);
        *(p + i) = m;
    }
    //������������� ������β����
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
    //�����ú�����ݽ������
    i = 0;
    for (; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    free(p);
    return 0;
}