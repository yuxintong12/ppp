#include<string.h>
#include<stdio.h>
const char * my_strstr(const char * dest,const char * scr)
{
    const char * dest1 = dest;//因为传参是const char*型所以对于创建的副本也要设
    const char * scr1 =scr;
    const char * dest2 = dest;
    while(*dest1 && *scr1)
    {
        while(*dest1 == *scr1)
        {
            dest1 ++;
            scr1++;
        }
        if(*scr1)
        {
            scr1 = scr;//目标的回正
            dest1 = ++dest2;//对于提取对比指针的回正
        }
    }
    if(*scr1 == '\0')
    {
        return dest2;
    }
    else
    {
        return NULL;
    }
    
    
}
int main()
{
    char ch[10] = "kkkiiiCl";
    char ch1[4] = "iiC";
    printf("%s\n",strstr(ch,ch1));
    printf("%s\n",my_strstr(ch,ch1));
    return 0;
}