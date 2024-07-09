/*      
1 2 3 4 5 6 7
1 2 3   3 2 1
1 2       2 1
1           1 */

#include<stdio.h>
int main()
{
    int m;
    printf("Enter a No of Lines : ");
    scanf("%d",&m);
    int nsp = 1;
    int nst = m-1;
    for(int b=1;b<=2*m-1;b++)
    {
        printf("%d ",b);
    }
    printf("\n");
    for(int i=1;i<=m-1;i++)
    {   int a = 1;
        for(int j=1;j<=nst;j++)
        {
            printf("%d ",a);
            a++;
        }
        for(int k=1;k<=nsp;k++)
        {
            printf("  ");
            a++;
        }
        a = a - 2*i;
        for(int j=1;j<=nst;j++)
        {
            printf("%d ",a);
            a--;
        }
        printf("\n");
        nst --;
        nsp +=2;
    }
    return 0;
}