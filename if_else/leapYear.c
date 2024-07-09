#include<stdio.h>
int main(){
    int x;
    printf("Enter a Year : ");
    scanf("%d",&x);
    if(x%4==0){
        printf("Givin year is Leap-Year ");
    }
    else{
        printf("Givin year is not Leap-Year");
    }
    
    return 0;
}