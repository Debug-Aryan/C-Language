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
    printf("\nThe matrix is :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int l1,r1,l2,r2;
    printf("Enter coordinates of(l1,r1) : ");
    scanf("%d %d",&l1,&r1);
    printf("Enter coordinates of(l2,r2) : ");
    scanf("%d %d",&l2,&r2);
    int sum = 0;
    for(int i=l1;i<=l2;i++)
    {
        for(int j=r1;j<=r2;j++)
        {
            sum += arr[i][j];
        }
    }
    printf("The sum of The Rectangle from (l1,r1) to (l2,r2) is %d",sum);
    return 0;
}