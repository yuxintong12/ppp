#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int check(int x)
{
	if (x > 1)
	{
		return x * check(x - 1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	/*int n, m, i;*/
	int i = 0;
	printf("�����룺");
	scanf("%d", &i);
	//�ݹ�ʵ�ְ취
	int c = check(i);
	/*m = 2;*/
	//�ǵݹ�ʵ�ְ취
	//for (n = 1; m < i + 1; m++)
	//{
	//	n = n * m;
	//	//���ǽ�Ϊ�򵥵�ʵ�ְ취��Ҳ�����õݹ�ʵ��
	//}
	printf("�׳�Ϊ��%d", c);
	return 0;

}
