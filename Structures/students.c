#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    char name[20];
    char dept[20];
    char course[20];
    int yearOfpassing;
}student;
void check(student s1,student s2){
    
    if(strcmp(s1.dept,s2.dept) == 0) printf("Two students have same department");
    else printf("Not same ");
    return;
}
int main()
{
    student s1,s2;
    strcpy(s1.dept,"Computer");
    strcpy(s2.dept,"Aomputer"); 
    int n = strcmp(s1.dept,s2.dept);
    printf("%d\n",n);
    check(s1,s2);

    return 0;
}