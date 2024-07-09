#include<stdio.h>
int main()
{
    int a[5] = {1,3,4,5,7};
    for(int i=0;i<5;i++)
    {
        printf("%p\n",&a[i]);
    }
    return 0;
}