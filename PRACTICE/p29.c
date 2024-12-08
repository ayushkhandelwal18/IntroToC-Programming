#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Enter age 0f ram:");
    scanf("%d", &ram);
    printf("Enter age of shyam:");
    scanf("%d", &shyam);
    printf("Enter age of ajay:");
    scanf("%d", &ajay);

    if (ram > shyam && ram> ajay)
    {
        printf("ram is youngest");
    }

    if (shyam > ram && shyam > ajay)
    {
        printf("shyam is youngest");
    }

    if (ajay> ram && ajay > shyam)
    {
        printf("ajay is youngest");
    }
    return 0;
}