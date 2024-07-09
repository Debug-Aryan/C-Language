/*
      A 
    A B C
  A B C D E
A B C D E F G  */


#include<stdio.h>
int main()
{
    int a = 1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf("  ");
        }
        int b = 1;
        for(int k=1;k<=a;k++)
        {   
            int d = b +64;
            char ch = (char)d;
            printf("%c ",ch);
            b++;
        }
        a = a + 2;
        printf("\n");
    }
    return 0;
}