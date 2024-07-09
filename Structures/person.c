#include<stdio.h>
#include<string.h>
typedef struct person{
    int age;
    float weight;
}person;
void change(person* p){
    p->age = 30;
    p->weight = 75; 
    return;
}
int main()
{
    person p1;
    p1.age;
    p1.weight;
    change(&p1);
    printf("%d\n",p1.age);
    printf("%f",p1.weight);
    return 0;
}