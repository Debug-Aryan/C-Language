#include <stdio.h>
int main()
{  int n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int k = 1; k <= i; k++)
            {
                printf("%d ", k);
            }
        }
        else
        {
            for (int p = 1; p <= i; p++)
            {
                printf("%c ",p+64);
            }
        }
        printf("\n");
    }
    return 0;
}
