#include<stdio.h>
int powerlog(int a, int b)
{   
    if(b==0) return 1;
    if(b==1) return a;
    int x = powerlog(a,b/2);
    if(b%2==0)
    {
        return x * x;
    }
    else{
        return x * x * a;
    }
}
int main()
{
    int a, b;
    printf("Enter a base : ");
    scanf("%d",&a);
    printf("Enter a power : ");
    scanf("%d",&b);
    int p = powerlog(a,b);
    printf("%d raised to %d is %d",a,b,p);
    return 0;
}