#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);
    printf("Enter a number : ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is greatest number",a);  
        }
        else{  // (a<c)
            printf("%d is greatest number",c);
        }
    }
    else{
        if(b>c){
        printf("%d is greatest number",b);
        }
        else{// (b<c)
            printf("%d is greatest number ",c);
        }
    }
    
    return 0;
}