#include<stdio.h>
int main()
{
    int b,p;
    printf("Enter Base number : ");
    scanf("%d",&b);
    printf("Enter Power number : ");
    scanf("%d",&p);
    int value = 1;
    for(int i=1; i<=p; i++)
    {
        value = value * b;
    }
    printf("%d raised to %d is %d",b,p,value);

    return 0;
}