#include<stdio.h>
int main(){
    int l,b,a,p;
    printf("Enter Length : ");
    scanf("%d",&l);
    printf("Enter Breadth : ");
    scanf("%d",&b);
     a = l * b;
     p = 2 * (l + b);
    if(a > p){
        printf("Area is greater than Perimeter of rectangle");
    }
    else{
        printf("Area is not greater than Perimeter of rectangle");
    }

    return 0;
}