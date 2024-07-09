#include<stdio.h>      
int main()              // Sum of Two given Numbers
{
    int x ;
    printf("Enter First No : ");
    scanf("%d",&x);

    int y ;
    printf("Enter Second No : ");
    scanf("%d",&y);

    int sum = x + y;
    printf("\nSum of Two No is : %d",sum);

    return 0;

}