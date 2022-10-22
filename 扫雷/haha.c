#define _CRT_SECURE_NO_WARNINGS 1
#include "li.h"
void put(char ch[HA][LI], int ha, int li, char fu)
{
	int i, j;
	for (i = 0; i < li; i++)
	{
		for (j = 0; j < ha; j++)
		{
			ch[i][j] = fu;
		}
	}
}