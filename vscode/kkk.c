#include <stdio.h>
#include <stdlib.h>

void mydiv(int * p,int i)
{
  if(i < 10)
  {
    if(i == 2)
    {
      *p  = *p + 1;
    }
  }
  else
  {
     int x = i % 10;
    if(x  == 2)
    {
      *p = *p + 1;
     
    }
     mydiv(p,i / 10);
  }
}
int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int count = 0;
  int i = 0;
  for(i = 1;i <= 20;i ++)
  {
    mydiv(&count,i);
  }
  printf("%d",count);
  return 0;
}