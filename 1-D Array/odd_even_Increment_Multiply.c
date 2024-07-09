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
    int multiply;
    int sum;
    for(int i=0;i<n;i++)
    {
       if(i%2!=0) a[i] *= 2;
       else a[i] += 10;
    }
    for(int i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }

    return 0;
}