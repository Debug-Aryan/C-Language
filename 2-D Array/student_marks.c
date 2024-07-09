#include<stdio.h>
int main()
{
    int arr[4][2] = {101,56,102,60,103,63,104,80};
    printf("Roll No  --->    Marks\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("    %d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}