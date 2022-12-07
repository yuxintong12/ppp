#include<stdio.h>
#include<assert.h>
#include<string.h>
int my_strcmp(const char * ch1,const char*ch2)
{
    assert(ch1 && ch2);
    while(*ch1 && *ch2 &&*ch1++ == *ch2++)
    {
       int x = 0;
    }
    return *ch1 - *ch2;
}
int main()
{
    char ch[20] = "kk0kkk50";
    char ch1[20] = "kkk";
    if(my_strcmp(ch,ch1) < 0)
    {
        printf("<\n");
    }
    else if(my_strcmp(ch,ch1) < 0)
    {
        printf(">\n");
    }
    else
    {
        printf("=\n");
    }
    if(strcmp(ch,ch1) < 0)
    {
        printf("<");
    }
    else if(strcmp(ch,ch1) < 0)
    {
        printf(">");
    }
    else
    {
        printf("=");
    }
    return 0;
    
}