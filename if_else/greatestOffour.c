#include<stdio.h>
int main (){
    int a,b,c,d;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);
    printf("Enter a number : ");
    scanf("%d",&c);
    printf("Enter a number : ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("%d is greatest number",a);
    }
    if(b>c && b>a && b>d){
        printf("%d is greatest number",b);
    }
    if(c>b && c>a && c>d){
        printf("%d is greatest number",c);
    }
    if(d>a && d>c && d>b){
        printf("%d is greatest number",d);
    }
    return 0;
}