#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon{
        int attack;
        int hp;
        char name[15];
    }a,b,c;

    a.attack=90;
    a.hp=500;
    strcpy(a.name,"pikachu");

    b=a;;
    c=a;;

    strcpy(b.name,"ayush");

    c.hp=300;

    printf("%d\n",a.hp);
    printf("%d\n",c.hp);

    printf("%s",b.name);

    return 0;
}