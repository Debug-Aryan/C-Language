#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    int product=1;
    for(int i=0;i<n;i++)
    {
        printf("Enter Element Number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {   
        product = product * a[i];
    }
    printf("product of Element is %d ",product);

    return 0;
}