#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number which you want to print series upto : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        if(i==1) 
        {
            printf("1 is neigher prime nor  composite number\n");
            continue;
        }
        for (int j = 2; j <= i-1; j++)
        {
            if(i % j == 0)
            {
                a = 0;
                break;
            }
        }
        if(a)
        {
            printf("%d ",i);
        }
    }
    return 0;
}