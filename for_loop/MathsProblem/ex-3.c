/*Display this GP -> 1,2,4,8,16,32,... upto'n'n terms.*/

#include<stdio.h>
int main(){
    int n,a=1;
    printf("Enter a Number :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("%d ",a);
        a = a *2;
    }
    
    return 0;
}