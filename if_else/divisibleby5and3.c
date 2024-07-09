#include<stdio.h>
int main (){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("It is divisible by 5 and 3 ");
    }
    else{
        printf("It isn't divisible by 5 and 3 ");
    }
    return 0;
}