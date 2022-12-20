#include <stdio.h>
#include<math.h>
void ju(int *p,int sz,int x)
{
    int i = 0;
    int sum = 0;
    for(i = 0;i < sz - 1;i += 2)
    {
       sum += p[i] * p[i + 1]; 
    }
    if(sum == x)
    {
        printf("%d ",x);
    }
}
int main()
{
    int arr[8] = {0};
    int i = 0;
    int j = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(i = 10000;i < 100000;i ++)
    {
        for(j = 1;j <= 4;j ++)
        {
            arr[2*(j - 1)] = i / pow(10,j);
            arr[2 *j-1] = i % (int)pow(10,j);
        }
        ju(arr,sz,i);

    }

    return 0;
}