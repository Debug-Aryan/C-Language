#include<stdio.h>
#include<limits.h>
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
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])    max = a[i];
    }
    int smax = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=max && smax<a[i])
        {
            smax = a[i];
        }
    }
    /*
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            smax = max;
            max = a[i];
        }
        else if(smax<a[i] && max!=a[i])
        {
            smax = a[i];
        }
    }*/
    printf("THe second Largest Number is : %d",smax);
    return 0;
}