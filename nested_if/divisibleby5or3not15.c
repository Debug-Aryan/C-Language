#include<stdio.h>
int main (){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a%5==0 || a%3==0){
        if(a%15!=0){
            printf("The Number is divisible by 5 or 3 but not 15");
        }
        else{
            printf("The number is divisible by 15");
        }
        }
        else{
            printf("The number is not divisible by 3 or 5");
        
        }
        return 0;

    }