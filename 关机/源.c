#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	system("shutdown -s -t 60");
haha:
	printf("����Ұְ֣����к���������룺\n");
	
	char input[20];
	scanf("%s", input);
	if (strcmp(input, "�ְ�") == 0)
	{
		printf("haha,��ԣ�����Ͱ���ȡ���ػ�\n");
		system("shutdown -a");

	}
	else goto haha;
	return 0;
}