#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char name[15];
 }pokemon;

 typedef struct legendarypokemon{
    pokemon normal;
    char ability[10];
 }legendarypokemon;

 legendarypokemon mewtwo;
 strcpy(mewtwo.ability,"pressure");
 mewtwo.normal.attack=150;
 mewtwo.normal.hp=100;
 strcpy(mewtwo.normal.name,"MEWTWO");

 return 0;
}

