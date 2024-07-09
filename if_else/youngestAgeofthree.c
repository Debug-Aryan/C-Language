#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter an age of Ram : ");
    scanf("%d",&a);
    printf("Enter an age of Shyam : ");
    scanf("%d",&b);
    printf("Enter an age of Ajay : ");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("Ram is youngest guy");
    }
    if(b<c && b<a){
        printf("Shyam is youngest guy");
    }
    if(c<b && c<a){
        printf("Ajay is youngest guy");
    }
    return 0;
}