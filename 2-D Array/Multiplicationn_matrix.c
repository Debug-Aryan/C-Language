#include <stdio.h>
int main()
{
    printf("For Matrix 'A' :\n");
    int a;
    printf("Enter the Number of Rows : ");
    scanf("%d", &a);
    int b;
    printf("Enter the Number of Columns : ");
    scanf("%d", &b);
    int arr[a][b];
    printf("Enter 'A' Matrix Element :\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("For Matrix 'B' :\n");
    int r;
    printf("Enter the Number of Rows : ");
    scanf("%d", &r);
    int c;
    printf("Enter the Number of Columns : ");
    scanf("%d", &c);
    int brr[r][c];
    printf("Enter 'B' Matrix Element :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    if (b != r)
        printf("Enter valid Matrix !!");
    else
    {
        printf("The multiplication of Matrix 'A' & 'B' is 'C' :\n");
        int crr[a][c];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < c; j++)
            {
                crr[i][j] = 0;
                for (int k = 0; k < b; k++)
                {
                    crr[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", crr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}