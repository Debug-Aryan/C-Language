/*
    1 
   1 2
  1   3 
 1     4
1 2 3 4 5   */

#include <stdio.h>
int main()
{
    
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {   if((i==3 && 2==k) || (i==4 && 2==k) || (i==4 && i + k == 7 ))
            {
                printf("  ");
            }
            else 
            {
                printf("%d ",k);
            }
        }
        printf("\n");
    }
    
    return 0;
}