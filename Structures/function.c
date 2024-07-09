// Structures are pass by value hote hai. 

#include<stdio.h>
#include<string.h>
typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char name[15];
    }pokemon ;
void fun(pokemon p){
        printf("%d",p.hp);
        return;
    }
int main ()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    fun(pikachu);
    return 0;
}