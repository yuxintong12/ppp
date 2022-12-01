#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
    int arr[6] = { -1,0,3,5,9,12 };
    int a = 12;
    printf("%d",search(arr,6 , a));
    return 0;
}