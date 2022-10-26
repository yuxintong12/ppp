#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	system("shutdown -s -t 60");
haha:
	printf("快叫我爸爸，不叫后果不堪设想：\n");
	
	char input[20];
	scanf("%s", input);
	if (strcmp(input, "爸爸") == 0)
	{
		printf("haha,真乖，我这就帮你取消关机\n");
		system("shutdown -a");

	}
	else goto haha;
	return 0;
}