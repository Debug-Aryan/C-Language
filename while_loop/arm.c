#include <stdio.h>
int main()
{
    int n,r;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int arm = 0;
    int a = n;
    while(n>0)
    {
        r = n % 10;
        arm = arm + (r*r*r);
        n = n / 10;
    }
    if(a==arm) printf("Armstrong Number");
    else printf("Not a Armstrong Number");
    
    return 0;
}