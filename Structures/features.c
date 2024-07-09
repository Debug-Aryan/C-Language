#include<stdio.h>
#include<string.h>
int main()
{
    typedef  struct pokemon{
        int attack;
        int hp;
        int speed;
        char name[15];
    } pokemon;
    pokemon a,b;
    a.attack = 100;
    a.hp = 70;
    a.speed = 120;
    strcpy(a.name,"Pikachu");

    b = a;
    printf("%s",b.name); 
    return 0;
}