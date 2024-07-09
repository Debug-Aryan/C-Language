#include<stdio.h>
int maze(int n, int m)
{
    int rightways = 0;
    int downways = 0;
    if(n==1 && m==1) return 1;
    if(n==1)// rightways call
    {
        rightways += maze(n,m-1);
    }
    if(m==1)//downways call 
    {
        downways += maze(n-1,m);
    }
    if(n>1 && m>1)
    {
        rightways += maze(n,m-1);
        downways += maze(n-1,m);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main ()
{
    int n,m;
    printf("Enter no of rows of the maze : ");
    scanf("%d",&n);
    printf("Enter no of columns of the maze : ");
    scanf("%d",&m);
    int total = maze(n,m);
    printf("%d",total);
    return 0;
}