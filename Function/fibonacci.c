#include<stdio.h>
int sum(int a)
{
    int x = 1;
    int y = 1;
    int sum;
    for(int i=3;i<=a;i++)
    {
        sum = x+y;
        x=y;
        y=sum;
    }
    return sum;
}
int main()
{
    int n;
    printf("ENter a Number which you want to print upto : ");
    scanf("%d",&n);
    printf("The fibonacci series upto %d Number is :\n",n);
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {   
            printf("The %dst fibonacci number is 1\n",i);
        }
        else if(i==2)
        {   
            printf("The %dnd fibonacci number is 1\n",i);
        }
        else {
        printf("The %dth fibonacci number is %d\n",i,sum(i));
        }
    }
    return 0;
}