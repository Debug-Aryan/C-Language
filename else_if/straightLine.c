#include<stdio.h>
int main(){
    double x1,x2,x3,y1,y2,y3;
    printf("Enter value of x1 : ");
    scanf("%f",&x1);
    printf("Enter value of x2 : ");
    scanf("%f",&x2);
    printf("Enter value of x3 : ");
    scanf("%f",&x3);
    printf("Enter value of y1 : ");
    scanf("%f",&y1);
    printf("Enter value of y2 : ");
    scanf("%f",&y2);
    printf("Enter value of y3 : ");
    scanf("%f",&y3);
    double m1,m2;
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    if(m1==m2){
        printf("All three points are on the straight line");
    }
    else{
        printf("points are not on the straight line");
    }

    return 0;
}