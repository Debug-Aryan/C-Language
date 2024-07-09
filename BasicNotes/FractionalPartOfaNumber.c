    // Take float input and print the fractional part of the real number.

#include<stdio.h>
int main()
{
    float x;
    printf("Enter a Number : ");
    scanf("%f",&x);
    int y;
    y = x;
    float z = x - y;
    printf("\nThe fractional part of the Number is : %f",z);

    return 0;
}