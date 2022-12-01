#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
int search(int* nums, int numsSize, int target)
{
    int* left = nums;
    int* right = nums + numsSize - 1;
    
    while (left <= right)
    {
        int half = ((left - nums) + (right - nums)) / 2;
        int move = (right - left) / 2;
        if (target == *(nums + half))
        {
            return half;
        }
        else if (target > *(nums + half) )
        {
            left += move + 1;
        }
        else
        {
            right -= move + 1;
        }
    }
    return -1;
}
int main()
{
    int n = 0;
    int i = 0;
    int m = 0;
    int* p = (int*)malloc(sizeof(int) * n);

    printf("你要在多少个元素中找:>");
    scanf("%d", &n);
    printf("请输入你要在那找:>");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        *(p + i) = m;
    }
    int s = 0;
    printf("你要找啥:>");
    scanf("%d", &s);
    printf("下标为:>%d",search(p,n,s));
    return 0;
}