#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter Element Number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int j=4;j>=0;j--)
    {
        printf("\nReverse Number : %d",a[j]);

    }
    return 0;
}