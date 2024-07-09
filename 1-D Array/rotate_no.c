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
    int n,k;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter a Number Of rotation : ");
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Element Number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    k = k % 10;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}