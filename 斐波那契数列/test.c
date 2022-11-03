#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* string)
{
	if (*string != '\0')
	{
		return 1 + my_strlen(string + 1);
	}
	else
		return 0;
}

void reverse_string(char* string)
{
	char* left = string;
	char* right = string + my_strlen(string) - 1;
	char tmp = *left;
	*left = *right;
	*right = '\0';
	if (my_strlen(string) > 1)
		reverse_string(string + 1);
	*right = tmp;
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
