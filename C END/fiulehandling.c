#include<stdio.h>
int main()
{
    //FILE* ptr = fopen("ayush.txt","r");
   // char str[100];
    //while(fgets(str,100,ptr)!=NULL)
    //printf("%s",str);


    FILE* ptr = fopen("ak.txt","w"); //new file bnae
    char str[]="Ayush Khandelwal"; //new file me write kra
    fputs(str,ptr);
    fclose(ptr);
}