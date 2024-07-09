#include<stdio.h>
int main(){
    int n;
    printf("Enter a percentage :");
    scanf("%d",&n);
    if(n>80){
        printf("A grade");
    }
    else if(n>70){
        printf("B grade");
    }
    else if(n>50){
        printf("C grade");
    }
    else {
        printf("you have failed in the exam");
    }

    
    return 0;
}