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
    int maxCount =0;
    int maxIdx = -1;
    for(int i=0;i<r;i++)
    {
        int count = 0;
        for(int j=0;j<c;j++)
        {
            if(arr[i][j] == 1) count++;
        }
        if(maxCount<count)
        {
            maxCount = count;
            maxIdx = i+1;
        }
    }
    printf("%d",maxIdx);
    return 0;
}