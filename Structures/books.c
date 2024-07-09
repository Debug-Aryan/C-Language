#include<stdio.h>
#include<string.h>
int main()
{
    struct books 
    {
        char name[20];
        int pages;
        float price;
    } a, b , c;
    //a
    a.pages = 152;
    a.price = 123.25;
    strcpy(a.name,"PHYSICS");
    printf("The No of pages are %d\n",a.pages);
    printf("The Price of the book is %f\n",a.price);
    printf("The Name of The book is :%s\n",a.name);
    printf("\n");//b
    b.pages = 350;
    b.price = 223.25;
    strcpy(b.name,"MATHS");
    printf("The No of pages are %d\n",b.pages);
    printf("The Name of The book is :%s\n",b.name);
    printf("The Price of the book is %f\n",b.price);
    printf("\n");//c
    c.pages = 152;
    c.price = 123.25;
    strcpy(c.name,"PHYSICS");
    printf("The No of pages are %d\n",c.pages);
    printf("The Price of the book is %f\n",c.price);
    printf("The Name of The book is :%s\n",c.name);
    return 0;
}