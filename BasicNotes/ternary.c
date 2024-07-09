#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // ternary operater
    //  exp1 ? exp2 : exp3
    n%2==0 ? printf("Even Number") : printf("odd Number");
    // if(n%2==0){
        // printf("Even Number");
    // }
    // else{
        // printf("Odd Number");
    // }
    return 0;
}