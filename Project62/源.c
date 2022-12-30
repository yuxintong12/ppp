#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
{
    // write code here
    int* left = rotateArray;
    int* right = rotateArray + rotateArrayLen - 1;
    int* mid = left;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if ( *mid > *right)
        {
            left = mid + 1;
        }
        else if (*mid < *right)
        {
            right = mid;
        }
        else if(*mid == *right)
        {
            right--;
        }

    }
    return (*right<*mid)?*right:*mid;

}
int main()
{
    int arr[] = { 1,2,2,2,2,2 };
    int sz = sizeof(arr) / sizeof(arr[0]);
   printf("%d", minNumberInRotateArray(arr, sz));
    return 0;
}