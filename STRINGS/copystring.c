#include<stdio.h>
int main(){
    char s1[]="Pyhsics Wallah";
    char*s2=s1;

    s1[0]='M';
    printf("%s\n ",s2);
    printf("%s",s1);
    return 0;
}