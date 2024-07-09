#include<stdio.h>
int main ()
{
    int a[7] = {1,2,3,4,5,6,7};
    // index 1-4 reverse
    for(int i=1,j=4;i<=j;i++,j--)
    {
        int temp =a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for(int i=0;i<7;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}