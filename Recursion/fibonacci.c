#include<stdio.h>
int fibo(int n)
{
    if(n<=2) return 1;
    return fibo(n-1) + fibo(n-2); 
}
int main ()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("The %d term is %d",n,fibo(n));
    return 0;
}