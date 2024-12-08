#include<stdio.h>
int main()
{
   int cp;
   printf("Enter the cost price:") ;
   scanf("%d" , &cp);

   int sp;
   printf("Enter the selling price:");
   scanf("%d", &sp);

if(cp>sp){
    printf("loss");
}
if(sp>cp) {
    printf("profit");
 }

 if(sp==cp){
    printf("neutral");
 }
    return 0;

}