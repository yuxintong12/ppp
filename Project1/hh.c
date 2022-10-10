#include "ga.h"
void ti(char arr[HANG][LIE], int hang, int lie, char fu)
{
	int i,j;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++)
		{
			arr[i][j] = 'fu';
		}
	}
}