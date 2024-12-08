#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[40];
        int npages;
        float price;
} a,b,c;

a.npages=200;
a.price=250.5;
strcpy(a.name,"Secret Seven");

b.npages=100;
b.price=150;
strcpy(b.name,"Animal Farm");

printf("%f\n", a.price);
printf("%f\n", b.price);
printf("%d\n", a.npages);
printf("%d\n", b.npages);
printf("%s\n", a.name);
printf("%s", b.name);


    return 0;
}