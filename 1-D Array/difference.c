#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Element Number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int esum = 0;
    int  osum = 0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            esum = esum + a[i];
        }
        else
        {
            osum = osum +a[i];
        }
    }
    printf("The sum of elements at even indices is : %d\n ",esum);
    printf("The sum of elements at odd indices is : %d\n",osum);
            d = esum - osum;
    printf("The difference between the sum of elements at even indices to the sum of elements at indices is : %d\n",d);
    return 0;
}