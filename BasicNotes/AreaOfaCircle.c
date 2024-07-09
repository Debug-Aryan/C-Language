#include<stdio.h>
int main()
{
    float r;
    printf("Enter Radius : ");
    scanf("%f",&r);
    float pi = 3.14;
    float area = pi * r * r;

    printf("\nThe Area Of Circle is : %f",area);

    return 0;
}