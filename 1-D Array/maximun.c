#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Element Number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])    max = a[i];
    }
    printf("Maximum value is %d ",max);

    return 0;
}