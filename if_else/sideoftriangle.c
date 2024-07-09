#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter a side : ");
    scanf("%d",&a);
    printf("Enter a side : ");
    scanf("%d",&b);
    printf("Enter a side : ");
    scanf("%d",&c);
    if(a+b>c && a+c>b && b+c >a){
        printf("valid triangle");
    }
    else{
        printf("invalid triangle");
    }
    return 0;
}