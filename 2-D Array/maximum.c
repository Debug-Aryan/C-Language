#include<stdio.h>
#include<limits.h>
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
    int max = INT_MIN;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(max==arr[i][j])  printf("The Index of Maximum element is (%d,%d)",i,j);
        }
    }
    printf("\nThe Maximum Element Of given matrix is %d",max);
    return 0;
}