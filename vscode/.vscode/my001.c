#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10] = "kjkjkak";
    char ch1[10] ="llkll";
    int a = memcmp(ch,ch1,5);
    return 0;
}