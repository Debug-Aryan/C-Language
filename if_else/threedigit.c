#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n>99 && n<1000){
        printf("The Number is three digit number ");
    }
    else{
        printf("The Number is not three digit number ");
    }
    return 0;
}