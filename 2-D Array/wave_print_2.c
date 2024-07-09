#include <stdio.h>
int main()
{
    int r;
    printf("Enter the Number of Rows : ");
    scanf("%d", &r);
    int c;
    printf("Enter the Number of Columns : ");
    scanf("%d", &c);
    printf("Enter the array element :\n");
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The wave print of given Matrix is :\n");
    for (int j = 0; j < c; j++)
    {
        if (j % 2 == 0)
        {
            for (int k = r - 1; k >= 0; k--)
            {
                printf("%d ", arr[k][j]);
            }
        }
        else
        {
            for (int k = 0; k < r; k++)
            {
                printf("%d ", arr[k][j]);
            }
        }
    }
    printf("\n");
    return 0;
}