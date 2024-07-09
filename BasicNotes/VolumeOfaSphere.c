#include<stdio.h>
int main()
{
    float r = 5;
    printf("Enter Radius : ");
    scanf("%f",&r);
    float pi = 3.14;
    float volume = 4 * pi * r*r*r/ 3;

    printf("\n The Volume is : %f",volume);

return 0;
}