#include <stdio.h>
int main()
{
    int i,n,a,r;
    printf("Enter a Number upto which you want Armstrong Number : ");
    scanf("%d",&n);
    printf("\nArmstrong Number is : ");

    for(i=1;i<=n;i++)
    {   a = i;
        int arm = 0;
        while(a>0)
        {
            r = a%10;
            arm = arm +(r*r*r);
            a = a/10;
        }
        if(i==arm) 
        {
            printf("%d ",i);
        }   
    }
    return 0;
}