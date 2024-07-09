#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int fact = 1;
    if (n < 0){
        printf("The given Number is negative. please, enter positive Number.");
    }
    else{
        for(int i=1; i<=n; i++)
        {
            fact = fact * i;
        }
        printf("The factorial of %d is %d\n",n,fact);
    }

    return 0;
}