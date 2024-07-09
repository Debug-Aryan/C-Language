#include<stdio.h>
int main()
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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d is duplicate number",a[i]);
                break;
            }
        }
    }
    return 0;
}
