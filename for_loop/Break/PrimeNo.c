#include<stdio.h>
int main(){
    int n,a=0;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=2; i<=n-1; i++)
    { 
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if (n==1) printf("1 is neither prime nor composite");
    else if (a==0) printf("The Number is prime number");
    else printf("The number is composite");

    return 0;
}