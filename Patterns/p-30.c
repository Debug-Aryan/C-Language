/*  A B C D E F G 
    A B C   E F G
    A B       F G
    A           G   */

#include<stdio.h>
int main()
{
    int m;
    printf("Enter a No of Lines : ");
    scanf("%d",&m);
    int nsp = 1;
    int nst = m-1;
    int c = 1;
    for(int b=1;b<=2*m-1;b++)
    {   
        int d = c + 64;
        char ch = (char)d;
        printf("%c ",ch);
        c++;
    }
    printf("\n");
    for(int i=1;i<=m-1;i++)
    {   
        int c = 1;
        for(int j=1;j<=nst;j++)
        {   
            
            int d = c + 64;
            char ch = (char)d;
            printf("%c ",ch);
            c++;
        }
        for(int k=1;k<=nsp;k++)
        {
            
            int d = c + 64;
            char ch = (char)d;
            printf("  ");
            c++;
        }
        for(int j=1;j<=nst;j++)
        {
            int d = c + 64;
            char ch = (char)d;
            printf("%c ",ch);
            c++;
        }
        printf("\n");
        nst --;
        nsp +=2;
    }
    return 0;
}