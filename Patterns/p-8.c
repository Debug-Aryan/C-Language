/*
    1 
    1 3 
    1 3 5 
    1 3 5 7 */

#include<stdio.h>
int main()
{
    for(int i=1; i<=7; i++)
    {
        if(i%2!=0)
        {
            for(int j=1; j<=i; j++)
            {
                if(j%2!=0) printf("%d ",j);
            }
        }
        else printf("\n");
    }

    return 0;
}