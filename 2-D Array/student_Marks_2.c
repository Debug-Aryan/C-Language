#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number of Students : ");
    scanf("%d",&n);
    int arr[n][4];
    printf("Roll no     Physics     chemistry       Maths\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("    Roll no   PHY     CHEM    MATHS \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("      %d",arr[i][j]);
        }
        printf("\n");
    }   
    return 0;
}