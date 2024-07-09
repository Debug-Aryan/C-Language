#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    puts("Enter a string :");
    scanf("%[^\n]s",str);
    puts("The size is : ");
    int size = 0;
    int i;
    while(str[i]!='\0')
    {
        size++;
        i++;
    }
    printf("%d",size);
    return 0;
}