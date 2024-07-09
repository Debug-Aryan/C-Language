#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct criketer{
        char firstname[15];
        char lastname[15];
        int age;
        int matches;
        float average;
    } criketer;
    criketer arr[20];
    for(int i=0;i<20;i++)
    {
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].matches);
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<20;i++)
    {
        printf("    Name      : %s %s\n",arr[i].firstname,arr[i].lastname);
        printf("    Age       : %d\n",arr[i].age);
        printf("No Of Matches : %d\n",arr[i].matches);
        printf("Average Score : %f\n \n",arr[i].average);
    }
    return 0;
}