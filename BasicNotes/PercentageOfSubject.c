#include<stdio.h>
int main()
{
    float x1 = 30; // x1 is Physics 
    float x2 = 32; // x2 is Chemistry
    float x3 = 36; // x3 is Maths
    float x4 = 35; // x4 is English
    float percent = (x1+x2+x3+x4) * 100 / 160 ;

    printf("\n%f",percent);

    return 0;
}