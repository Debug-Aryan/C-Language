#include<stdio.h>
int main()
{
    int a = 5;
    int b = 7;
    int r = a % b;                          // when (a > b) a % b = r 
    printf("The Remainder is : %d",r);      // when (a < b) a % b = a

    return 0;

}