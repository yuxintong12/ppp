#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int i = 0;
    int count = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (*(nums + i) == 1 )
        {
            *(nums + i) = 0;
            count++;
        }
        else if (*(nums + i) == 0)
        {
            int te = 0;
            te = *(nums + i);
            *(nums + i) = count;
            count = te;
        }
    }
    int max = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (*(nums + i) > max)
        {
            int m = 0;
            m = *(nums + i);
            *(nums + i) = max;
            max = m;

        }
    }
    if (max > count)
    {
        return max;
    }
    else
    {
        return count;
    }
}
int main()
{
    int arr[6] = { 1,0,1,1,0,1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int c = findMaxConsecutiveOnes(arr, sz);
    printf("%d\t", c);
    return 0;
}