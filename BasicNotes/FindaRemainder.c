        // Take two integers input, a and b : a>b,and find the remainder when a is divided by b.

#include<stdio.h>  
int main()
{
    int a,b;
    printf("Enter first No : ");
    scanf("%d",&a);                     // Divisor * Quotiant + remainder = Dividend
    printf("Enter second No : ");       // And here Divisor = b, Quotiant = q, Dividend = a, Remainder = r
    scanf("%d",&b);                                 
    int q = a / b;
    int r = a - (b * q);

    printf("\nThe Remainder is : %d",r);
    
    return 0;
} 