#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if(a < 0){
    a = a * (-1);
    printf("The Absolute Number is %d",a);
}
    else{
        printf("The absolute number is %d",a);
}
    return 0;
} 