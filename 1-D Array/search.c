#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[7] = {1,23,34,5,6,7,8};
    int x = 23;
    int idx = 0;
    bool flag = false;
    for(int i=0;i<7;i++)
    {
        if(arr[i]==x) 
        {   flag = true;
            idx = i;
        }
    }
    if(flag==false) printf("%d is not present in the array",x);
    else printf("%d is present in the array and its index is %d",x,idx);
    return 0;
}