#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int num_c(char * p,int x)
{
    int i = 0;
    for(i = 0;i < x;i ++)
    {
        if(!(p[i] >= 'a'&& p[i] <= 'z'))
        {
            return 0;
        }
        else if(!(p[i] >= '0'&&p[i] <= '9'))
        {
            return 0;
        }
        else if(!(p[i] >= 'A'&& p[i] <= 'Z'))
        {
            return  0;
        }

    }
    return 1;
}
int z_c(char *p,int x)
{
    if(p[0] - '0' < 0 ||p[0] - '0' > 9)
    {
        return 0;
    }
    return 1;
}
int u_c(char *p,int x)
{
    int i = 0;
    int flag = 0;
    int flag1 = 0;
    int flag2 = 0;
    for(i = 0;i < x;i ++)
    {
        if(p[i] >= '0'&&p[i] <= '9'&&!flag)
        {
            flag = 1;
        }
        if(p[i] >= 'a'&&p[i] <= 'z'&& flag1)
        {
            flag1 = 1;
        }
        if(p[i] >= 'A' &&p[i] <= 'Z'&& flag2)
        {
            flag2 = 1;
        }
    }
    if((flag + flag1 + flag2) >= 2)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int a_c(char *p,int x)
{
    if(x >= 8)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int check(char * p,int x)
{
    int i = 0;
    int j  = 0;
    int (*p1[4])(char*,int) ={num_c,z_c,u_c,a_c};
    for(i = 0;i < x;i ++)
    {
        for(j = 0;j < 4;j ++)
        {
            if(!p1[i](p,x))
            {
                return 0;
            }
        }
    }
    return 1;
}
int main() 
{
    int n = 0;
    freopen("in.txt","wb",stdin);
    freopen("out.txt","rb",stdout);
    scanf("%d",&n);
    char ch[100] = {0};
    int i = 0;
    for(i = 0;i < n;i ++)
    {
        scanf("%[^\n]s",ch);
        int sz = strlen(ch);
        if(check(ch,sz))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}