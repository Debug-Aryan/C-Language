#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter Element Number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {   
        sum = sum + a[i];
    }
    printf("Sum of Element is %d ",sum);

    return 0;
}