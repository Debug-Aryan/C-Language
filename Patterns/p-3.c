/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4 */

#include<stdio.h>
int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
