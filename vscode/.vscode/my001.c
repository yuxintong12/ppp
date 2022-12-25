#include <stdio.h>
#include <stdlib.h>
int check(int* p,int sz)
{
  int i = 0;
  for(i = 0;i < sz;i ++)
  {
    if(p[i] > 2021)
    {
      return 0;
    }
    else if(p[i] == 2021)
    {
        return 2;
    }
  }
  return 1;
}
void mydiv(int x,int *p)
{
  if(x < 10)
  {
    p[x] ++;
  }
  else
  {
    p[x % 10] ++;
    mydiv(x / 10,p);
  }
}
int main()
{
  int arr[10] = {0,0,0,0,0,0,0,0,0,0};
  int i = 0;
  int sz = sizeof(arr) /sizeof(arr[0]);
  while(1)
  {
    mydiv(i,arr);
    if(check(arr,sz) != 1)
    {
        break;
    }
    i++;

  }
  if(check(arr,sz))
  {
    printf("%d\n",i);
  }
  else
  {
    printf("%d\n",i -1);
  }
  // 请在此输入您的代码
  return 0;
}