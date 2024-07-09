#include<stdio.h>
#include<stdbool.h>
int main()
{
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a,b;
    a.day = 3;
    a.month = 3;
    a.year = 2006;

    b.day = 17;
    b.month = 10;
    b.year = 1985;

    bool flag = true;
    if(a.day==b.day) flag = false;    
    if(a.month==b.month) flag = false;
    if(a.year==b.year) flag = false;    

    if(flag == true) printf("The dates  are same !");
    else printf("The dates are not same !");


    return 0;
}