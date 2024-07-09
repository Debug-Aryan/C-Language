#include<stdio.h>
int main()
{
    int n,ld,sum = 0;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        ld = n % 10;
        sum = sum + ld;
        n = n / 10;
    }
    printf("The sum of given number is %d",sum);
    
    return 0;
}