#include<stdio.h>
int sum(int a)
{
    if(a==1) return 1;
    return a + sum(a - 1);
}
int main ()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("The Sum is %d",sum(n));
    return 0;
}