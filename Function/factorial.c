#include<stdio.h>
int fact(int n)
{
    int fact = 1;
    for(int i=2;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter a Number which you want to print upto : ");
    scanf("%d",&n);
    printf("The factorial upto %d Number is :\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("The factorial of %d is : %d\n",i,fact(i));
    }
    return 0;
}