/*
      A 
    A B
  A B C
A B C D   */



#include<stdio.h>
int main()
{   
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf("  ");
        }
        int a = 1;
        for(int k=1;k<=i;k++)
        {   
            int d = a +64;
            char ch = (char)d;           
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}