#include<stdio.h>
int main()
{
    float p,r,t,si,amt;
    printf("Enter Principal : ");
    scanf("%f",&p);

    printf("Enter Rate : ");
    scanf("%f",&r);

    printf("Enter Time : ");
    scanf("%f",&t);

    si = (p*r*t) / 100;
    printf("\nThe Simple Intrest is :%f",si);

    amt = p + si;
    printf("\nThe Total Amount is : %f",amt);

    return 0;

}