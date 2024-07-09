#include<stdio.h>
int main()
{
    int arr[100],x;
    int sum = 0;
    int sum2 = 0;
    for(int i=0;i<99;i++)
    {
        sum = sum + arr[i];
    }
    sum2 = 100*(100+1) / 2;
    x = sum2 - sum;
    printf("Missing element is %d ",x);

    return 0;
}