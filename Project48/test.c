#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
int max(int x, int y)
{
	return (x > y) ? x : y;
}
int main()
{
	freopen("D:\\桌面\\in.txt", "r", stdin);
	freopen("D:\\桌面\\out.txt", "w", stdout);
	int i = 0;
	int j = 0;
	scanf("%d %d", &i, &j);
	int c = max(i, j);
	printf("最大值是:>%d\n", c);
	printf("time -> %.5f\n", (double)clock() / CLOCKS_PER_SEC);
	fclose(stdin);
	fclose(stdout);
	return 0;
}