#include<stdio.h>
int main()
{
    int r;
    printf("Enter the Number of Rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the Number of Columns : ");
    scanf("%d",&c);
    printf("Enter the array element :\n");
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int maxsum = 0;
    for(int i=0;i<r;i++)
    {
        int sum = 0;
        for(int j=0;j<c;j++)
        {
            sum += arr[i][j];
            if(maxsum < sum )   maxsum = sum;
        }
    }
    printf("Sum of given matrix is %d\n",maxsum);
    for(int i=0;i<r;i++)
    {
        int sum = 0;
        for(int j=0;j<c;j++)
        {
            sum += arr[i][j];
            if(maxsum == sum )   printf("The Row of having the maximum sum in a given matrix is %d",i+1);
        }
    } 
    return 0;
}