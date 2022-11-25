#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max(int x, int y)
{
	return (x > y) ? x : y;
}
int main()
{
	freopen("D:\\×ÀÃæ\\input.txt", "r", stdin);
	freopen("D:\\×ÀÃæ\\output.txt", "w", stdout);
	int i = 0;
	int j = 0;
	scanf("%d %d", &i, &j);
	int c = max(i, j);
	printf("%d", c);
	fclose(stdin);
	fclose(stdout);
	return 0;
}