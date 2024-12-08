#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char name[15];
 }pokemon;




void fun(pokemon p){
    printf("%d",p.hp);
    return;
}

void change(pokemon p){
    p.hp=100;
    p.attack=200;
    return;
}

int main(){
    
 pokemon pikachu;
 pikachu.hp=60;
 pikachu.attack=140;
 pikachu.speed=30;

 printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);

// fun(pikachu);

change(pikachu);

 return 0;
}