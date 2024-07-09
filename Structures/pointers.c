#include<stdio.h>
#include<string.h>
typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char name[15];
    }pokemon ;
    void change(pokemon* p){
        //(*p).hp = 70;
        p->hp = 70; // second way to initialize
        (*p).attack = 80;
        (*p).speed = 120;
        strcpy((*p).name,"Raichu");
        return;
    }
int main ()
{
    pokemon pikachu = {60,70,100,"Pikachu"};
    /*pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    strcpy(pikachu.name,"Pikachu");*/    

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%s\n",pikachu.name);

    change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%s\n",pikachu.name);
    return 0;
}