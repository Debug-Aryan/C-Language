/*
    1
    0 1
    1 0 1
    0 1 0 1  */

/*#include<stdio.h>
int maian()
{
    int a;
    for(int i=1;i<=4;i++)
    {
        if(i%2!=0) a = 1;
        else a = 0;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            if(a==0) a = 1;
            else a = 0;
        }
    }
    return 0;
}*/

        //Method->2
        
#include<stdio.h>
int maian()
{
    int a;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i=j%2==0) printf("1");
            else printf("0");
        } 
    }
    return 0;
}