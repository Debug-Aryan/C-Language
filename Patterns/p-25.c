/*
      A 
    A B A
  A B C B A
A B C D C B A   */

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
            int d = a + 64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        int b = 1;
        b = i - 1;
        for(int x=1;x<=i-1;x++)
        {
            int c = b + 64;
            char ch = (char)c;
            printf("%c ",ch);
            b--;
        }
        printf("\n");
    }
    return 0;
}