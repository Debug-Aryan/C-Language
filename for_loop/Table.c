#include<stdio.h>
int main(){
    int n,p;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        p = n * i;
        printf(" %d * %d = %d\n",n,i,p);
    }
    
    return 0;
}