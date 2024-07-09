#include<stdio.h>
typedef int* pointer;
int main ()
{
    int x = 5, y = 6;
    //int* a = &x , b = &y; // computer read as int * a ,b 
    pointer a = &x , b = &y;
    printf("%d\n",a);
    printf("%d\n",b);

    return 0 ;

}