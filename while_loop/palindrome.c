#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int r =0;
    int p = n;
    while(n>0)
    {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }
    if(p==r) printf("%d is Palindrome Number",p);
    else printf("%d is not Palindrome Number",p);

    return 0;
}