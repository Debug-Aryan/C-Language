#include<stdio.h>
#include<string.h>
int main ()
{
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char name[15];
    }pokemon ;
    typedef struct legendarypokemon{
        pokemon basic;
        char spattack[15];
    }legendarypokemon;
    typedef struct godpokemon{
        legendarypokemon legend;
        int ultra;
    }godpokemon;
    godpokemon arcuse;
    strcpy(arcuse.legend.basic.name,"Arcuse");
    printf("%s",arcuse.legend.basic.name);
    return 0;
}