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
    printf("The Matrix 'A' :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose of Matrix 'A' :\n");
    int brr[c][r];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}