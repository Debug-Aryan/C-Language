#include<stdio.h>
int stair(int n)
{
    if(n<=2) return n;
    int totalway = stair(n-1) + stair(n-2);
    return totalway;
}
int main()
{
    int n;
    printf("Enter a steps of stair : ");
    scanf("%d",&n);
    int way = stair(n);
    printf("\nThere are %d way to step the stair",way);
    return 0;
}