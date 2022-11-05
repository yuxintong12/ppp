#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h>
void de(int* p,int n)
{
	while (n >= 0)
	{
		if (*p >= *(p + 1))
		{
			int tem = 0;
			tem = *p;
			*p = *(p + 1);
			*(p + 1) = tem;
		}
		p++;
		n--;
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = 0;
	int i = 0;
	int * p = (int*)malloc(n * sizeof(int));
	//数据的输入
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		*(p + i) = m;
	}
	//排序
	de(p,n);
	while (1)
	{
		//判断竹子相同的段
		int* p1 = (int*)malloc(n * sizeof(int));
		for (i = 0; i < n; i++)
		{
			//将连续相同的竹子取出来
			if (*(p + i) = *(p + i + 1) && i + 1 < n)
			{
				*(p1) = *(p + i);
				*(p1 + 1) = *(p + i + 1);
				p1++;
			}
		}
		if ()
	}

}