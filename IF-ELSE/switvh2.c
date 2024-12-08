#include<stdio.h>
int main()
{
    int grade,p,c,m;
    printf("Enter marks of p");
    scanf("%d",&p);

    printf("Enter marks of c");
    scanf("%d",&c);

    printf("Enter marks of m");
    scanf("%d",&m);

    grade=(p+c+m)/3;

    switch(grade)
    {
        case1:
        grade>90;
        printf("grade A\n");
        break;

        case2: 
        grade<90 && grade>70;
        printf("grade B\n");
        break;

        caseD:
        grade<60 && grade>40;
        printf("grade C\n");
        break;

        caseC:
        grade<70 && grade>60;
        printf("grade D\n");
        break;
        
        default:
        grade<40;
        printf("fail");
        break;
  }
        return 0;
}