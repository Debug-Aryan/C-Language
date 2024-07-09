#include<stdio.h>
int main()
{
    int n;
    printf("Enter such a number which you want to print that type of matrix : ");
    scanf("%d",&n);
    int arr[n][n];
    int brr [n][n];
    int crr [n][n];
    printf("Enter 'A' Matrix Element :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter 'B' Matrix Element :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("Addition Of Two Matrices is 'C':\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            crr [i][j] = arr[i][j] + brr [i][j];
            printf("%d\t",crr [i][j]);
        }
        printf("\n");
    }

    return 0;
}