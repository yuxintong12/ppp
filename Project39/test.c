#include "stdio.h"
int main()
{
	int input;
	scanf("%d", &input);
	input /= 10;//ÒòÎªinput / 10 == 10-0
	switch (input)
	{
	case 10:
		putchar('A');
		break;
	case 9:
		putchar('A');
		break;
	case 8:
		putchar('B');
		break;
	case 7:('D');
		break;
	default:
		putchar('E');
		break;
	}
	return 0;
}
