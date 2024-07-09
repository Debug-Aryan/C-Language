#include<stdio.h>
int main()
{  
    // Q.1)  

    int i = 2 * 3/ 4 + 4 / 4 + 8 - 2 + 5 / 8;       // BODMAS = B, O, D/M, A/S.
    printf("\n%d",i);

    // Q.2)

    int c = 2, j = 3, k, l;
    float a,b;
    k = c / j * j;
    l = j / c * c;
    a = c / j * j;
    b = j / c * c;
    printf("\n%d\n %d\n %f\n %f", k, l, a, b);

    return 0;

}