#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter 'X' Number : ");
    scanf("%d",&x);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Element Number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>x) count++;
    }
    printf("The Number of Element %d is greater than %d : \n",n,x);
    printf("%d",count);
    return 0;
}