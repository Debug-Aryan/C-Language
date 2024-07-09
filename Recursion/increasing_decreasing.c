#include<stdio.h>
void both(int n)
{
    if(n==0) return;// base sase
    printf("%d\n",n);
    both(n-1); // code
    printf("%d\n",n);// call
    return;
}
int main ()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    both(n);
    return 0;
}