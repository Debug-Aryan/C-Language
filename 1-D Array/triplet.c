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
    int triplet = 0;
    printf("The Following Triplet :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==x)
                {
                    triplet++;
                    printf("(%d,%d,%d)  ",a[i],a[j],a[k]);
                }
            }
        }
    }
    printf("\nTotal Triplet is : %d",triplet);
    return 0;
}
