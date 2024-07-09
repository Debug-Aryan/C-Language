#include<stdio.h>
void reverse(int arr[],int a,int b)
{
    int i = a;
    int j = b;
    while(i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return ;
}
int main()
{   
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Element Number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}