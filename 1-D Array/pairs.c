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
    int totalpairs = 0;
    printf("The Following Pairs :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                totalpairs++;
                printf("(%d,%d)\n",a[i],a[j]);
            }
        }
    }
    printf("Total pairs is : %d ",totalpairs);
    return 0;
}
