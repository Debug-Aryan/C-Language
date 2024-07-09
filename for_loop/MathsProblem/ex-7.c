/*Print The sum of series 1-2+3-4+5-6+7.....'n' terms.*/

/*#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    { 
        if(n%2==0) {
            n = -n/2;
            printf("The sum is %d",n);
        }
        else  {
            n = -n/2 + n;
            printf("The sum is %d",n);
        }
    }
    return 0;
}*/

                    // Method -> 2

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1; i<=n; i++)
    { 
        if(i%2!=0) sum = sum + i;
        else sum = sum - i; 
    }
    printf("The sum is %d",sum);

    return 0;
}











