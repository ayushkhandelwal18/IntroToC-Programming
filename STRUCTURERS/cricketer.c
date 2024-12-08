#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int match;
        float avgrun;

    }cricketer;

    cricketer arr[3];
    for(int i=0;i<=2;i++){
        scanf( "%s",&arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].match);
        scanf("%f",&arr[i].avgrun);
}

   for(int i=0;i<=2;i++){
        printf("Name:%s\n",arr[i].name);
        printf("Age:%d\n",arr[i].age);
        printf("Match:%d\n",arr[i].match);
        printf("Average runs:%f\n",arr[i].avgrun);
}
    
    return 0;
}