#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum ;
    for(int i=1; i<=n; i++)
    {   if(i==1)
        {   sum = 1;
            printf("The %dst fibonacci number is %d\n",i,sum);
        }
        else if(i==2)
        {   sum = 1;
            printf("The %dnd fibonacci number is %d\n",i,sum);
        }   
        else{
        sum = a + b;
        a = b;
        b = sum; 
        printf("The %dth fibonacci number is %d\n",i,sum);
        }
    }
    return 0;
}