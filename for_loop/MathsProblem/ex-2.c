/* Display this AP -> 4,7,10,13,16... uptoo 'n' terms. */

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=4; i<=3*n+1; i=i+3)
    {   
        printf("%d ",i);
    }
    return 0;
}