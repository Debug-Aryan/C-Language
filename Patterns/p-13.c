/*
    * * * * * * 
    *         *
    *         *
    * * * * * *    */

#include<stdio.h>
int main()
{
    for(int i=1; i<=4; i++)
    {
        if(i==1 || i==4)
        {
            for(int j=1; j<=6; j++)
        {
            printf("* ");
        }
        printf("\n");
        }
        else
        {
            for(int j=1; j<=6; j++)
            {
               if(j==1 || j==6)
               {
                    printf("* ");
               }
               else { printf("  "); } 
            }
            printf("\n");
        }
    }
    return 0;
}




