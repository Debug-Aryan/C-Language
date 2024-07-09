#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the cordinates :  ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("Lies on origin");
    }
    else if(x==0){
        printf("Lies on Y-axis");
    }
    else if(y==0){
        printf("Lies on X-axis");
    }
    else{
        printf("The point is not lie on x-axis or y-axis");
    }

    return 0;
}