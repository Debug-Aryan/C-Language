#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    puts("Enter a string :");
    scanf("%[^\n]s",str);
    int size = 0;
    int i;
    while(str[i]!='\0')
    {
        size++;
        i++;
    }
    for(int k=0,j=size-1;k<=j;k++,j--)
    {
        char temp =str[k];
        str[k] = str[j];
        str[j] = temp;
    }
    puts("The Reverse string is :");
    puts(str);

    return 0;
}