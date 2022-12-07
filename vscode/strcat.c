#include<stdio.h>
#include<assert.h>
char * my_strcat(char * dest,const char * scr)
{
    char * tem = dest;
    while(*dest)
    {
        dest++;
    }
    while(*scr)
    {
        *dest++ = *scr++;
    }
    return tem;

}
int main()
{
    char ch[20] = "I love ";
    char ch1[20] = "you";
    printf("%s",my_strcat(ch,ch1));
    return 0;
}