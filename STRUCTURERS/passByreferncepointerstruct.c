#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
 }pokemon;

 void change(pokemon* p){
   // (*p).hp=600;
   p->hp=70;  // (*X).something = X->something
    (*p).attack=700;
    (*p).speed=1000;
    (*p).tier='S';
    strcpy((*p).name,"ayush");
    return ;
 }

 int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"pikachu");
    
    
    printf("%d\n",pikachu.hp);
     printf("%d\n",pikachu.attack);
      printf("%d\n",pikachu.speed);
       printf("%c\n",pikachu.tier);
        printf("%s\n",pikachu.name);

        change(&pikachu);

        printf("%d\n",pikachu.hp);
     printf("%d\n",pikachu.attack);
      printf("%d\n",pikachu.speed);
       printf("%c\n",pikachu.tier);
        printf("%s\n",pikachu.name);


  return 0;


 }

