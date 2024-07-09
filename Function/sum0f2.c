#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main ()
{
    int a,b;
    printf("Enter a Two Number : ");
    scanf("%d %d",&a,&b);
    int sum = add(a,b);
    printf("Sum of Two Number is %d",sum);
    return 0;
}