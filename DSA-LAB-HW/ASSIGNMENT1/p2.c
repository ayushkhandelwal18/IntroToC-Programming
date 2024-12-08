#include<stdio.h>
#include<stdbool.h>

int count(char* str){
    int count =0;
    bool word =false;

    while(*str){
        if(*str == ' ') word=false;

        else if(!word) {
            word=true;
            count++;
        }
        str++;
    }
    return count;
}

int main(){
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str),stdin);

    int words=count(str);
    printf("Number of words : %d",words);

    return 0;
}