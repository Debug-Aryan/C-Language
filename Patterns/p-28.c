/*
* * * * * * *
* * *   * * *
* *       * *
*           *      */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a No of Lines : ");
    scanf("%d",&n);
    int nsp = 1;
    int nst = n;
    for(int b=1;b<=2*n+1;b++)
    {
        printf("* ");
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=nst;j++)
        {
            printf("* ");
        }
        for(int k=1;k<=nsp;k++)
        {
            printf("  ");
        }
        for(int a=1;a<=nst;a++)
        {
            printf("* ");
        }
        printf("\n");
        nst --;
        nsp +=2;
    }
    return 0;
}