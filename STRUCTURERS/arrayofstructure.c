#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        char tier;
        int attack;
        char name[10];
    } pokemon;

    pokemon arr[3]; // arr[0],arr[1],arr[2]
    arr[0].hp = 100;
    arr[0].attack = 10;
    arr[0].speed = 30;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "pikachu");

    arr[1].hp = 110;
    arr[1].attack = 20;
    arr[1].speed = 400;
    arr[1].tier = 'S';
    strcpy(arr[1].name, "ayush");

    arr[2].hp = 120;
    arr[2].attack = 90;
    arr[2].speed = 80;
    arr[2].tier = 'Y';
    strcpy(arr[2].name, "yush");

    for (int i = 0; i <= 2; i++)
    {
        printf("%s\n", arr[i].name);
        printf("HP:%d\n", arr[i].hp);
        printf("Attack:%d\n", arr[i].attack);
        printf("Speed;%d\n", arr[i].speed);
        printf("Tier:%c\n", arr[i].tier);
    }
}