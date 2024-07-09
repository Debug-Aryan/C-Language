#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);
    printf("Enter a number : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greatest number",a);
    }
    if(b>c && b>a){
        printf("%d is greatest number",b);
    }
    if(c>b && c>a){
        printf("%d is greatest number",c);
    }
    return 0;
}