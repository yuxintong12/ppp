#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
int max(int x, int y)
{
	return (x > y) ? x : y;
}
int main()
{
	FILE* in;
	FILE* out;
	in = fopen("D:\\����\\in.txt", "rb");
	out = fopen("D:\\����\\out.txt", "wb");
	int i = 0;
	int j = 0;
	fscanf(in,"%d %d", &i, &j);
	int c = max(i, j);
	fprintf(out,"���ֵ��:>%d\n", c);
	fprintf(out,"time -> %.5f\n", (double)clock() / CLOCKS_PER_SEC);
	fclose(stdin);
	fclose(stdout);
	return 0;
}