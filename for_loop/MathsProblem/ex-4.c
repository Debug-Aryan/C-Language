/*Display this GP -> 3,12,48,... upto'n'n terms.*/

#include<stdio.h>
int main(){
    int n,a=3;
    printf("Enter a Number :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("%d ",a);
        a = a * 4;
    }
    
    return 0;
}