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
    int minr = 0;
    int maxr = r-1;
    int minc = 0;
    int maxc = c-1;
    int tne = r*c;
    int count = 0;
    while(count<tne)
    {
        for(int j=minc;j<=maxc;j++)
        {
            printf("%d ",arr[minr][j]);
            count++; 
        }
        minr++;
        if(count>=tne) break;
        for(int i=minr;i<=maxr;i++)
        {
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;
        for(int j=maxc;j>=minc;j--)
        {   
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=tne) break;
        for(int i=maxr;i>=minr;i--)
        {
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++; 
    }
    return 0;
} 