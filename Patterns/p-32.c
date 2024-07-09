/*
    1 1 1 1 1 1 1 
    1 2 2 2 2 2 2 
    1 2 3 3 3 3 3 
    1 2 3 4 4 4 4
    1 2 3 4 3 3 3
    1 2 3 4 3 2 2
    1 2 3 4 3 2 1   */

#include<stdio.h>
int main ()
{
    int m,j,i;
    printf("Enter a No of Lines : ");
    scanf("%d",&m);
    int min = 0;
    for( i=1;i<=2*m-1;i++)
    {   
        for(j=1;j<=2*m-1;j++)
        {
            int a = i;
            if(i>m)
            {
                a = 2*m - i;
            } 
            int b = j;
            if(j>m)
            {
                b = 2*m - j;
            } 
            if(i<j) min = a;
            else min = b;
            printf("%d ",min);
        }
        printf("\n");
    }
    return 0;
}