#include<stdio.h>
int factorial(int a)
{
    if(a==1 || a==0) return 1;
    return a * factorial(a - 1);
}
int main ()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("The factorial is %d",fact);
    return 0;
}