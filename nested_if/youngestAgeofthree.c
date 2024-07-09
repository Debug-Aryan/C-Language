#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter an age of Ram : ");
    scanf("%d",&a);
    printf("Enter an age of Shyam : ");
    scanf("%d",&b);
    printf("Enter an age of Ajay : ");
    scanf("%d",&c);
    if(a<b){
        if(a<c){
            printf("Ram is youngest guy");  
        }
        else{  // (a>c)
            printf("Ajay is youngest guy");
        }
    }
    else{
        if(b<c){
        printf("Shyam is youngest guy");
        }
        else{// (b>c)
            printf("Ajay is youngest guy");
        }
    }
    return 0;
}