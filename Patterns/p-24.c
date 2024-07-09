/*
      1 
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1   */

#include<stdio.h>
int main()
{   
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        int a = 1;
        a = i - 1;
        for(int x=1;x<=i-1;x++)
        {
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}