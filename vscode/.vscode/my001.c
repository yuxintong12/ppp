#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void* my_memcpy(void* dest, const void* scr, size_t n)
{
    void* ret = dest;
    while ((*(char*)dest++ = *(char*)scr++) && n--)
    {
        ;
    }
    return ret;
}
void* my_memmove(void* dest, const void* scr, size_t n)
{
    if (dest > scr)
    {
        void* ret = dest;
        while ((*(char*)dest = *(char*)scr) && n--)
        {
            ;
        }
        return ret;
    }
    else
    {
        void* tem = dest;
        while (n--)
        {
            *((char*)dest + n) = *((char*)scr + n);
        }
        return tem;

    }
}
int main()
{
    char ch[10] = "kjkjkak";
    char ch1[10] = "llkll";
    int a = memcmp(ch, ch1, 5);
    my_memcpy(ch, ch + 1, 3);
    printf("%s\n", ch);
    memcpy(ch, ch + 1, 3);
    printf("%s\n", ch);
    memmove(ch, ch + 1, 3);
    printf("%s\n", ch);
    my_memmove(ch, ch + 1, 3);
    printf("%s\n", ch);
    return 0;
}