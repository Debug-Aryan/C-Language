#include<stdio.h>
int main()
{
    int n;
    printf("Enter Size of an array : ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Element Number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Reverse order is : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            b[i] = a[j];
        }
        printf("%d ",b[i]);
    }
    return 0;
}