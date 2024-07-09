// Union :-> Only one attributes can be used at a time. 

#include<stdio.h>
#include<string.h>
typedef union pokemon{
        int hp;
        int attack;
        int speed;
        char name[15];
    }pokemon ;

int main ()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    strcpy(pikachu.name,"Pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%s\n",pikachu.name);
    return 0;
}