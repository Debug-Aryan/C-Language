#include<stdio.h>
void increasing(int n)
{
    if(n==0) return;// base sase
    increasing(n-1); // code
    printf("%d\n",n);// call
    return;
}
int main ()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}