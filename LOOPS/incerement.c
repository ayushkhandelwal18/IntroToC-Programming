#include <stdio.h>
int main()
{
    int a, m;
    a = 6;
    m = a++;
    printf("%d   %d", a ,  m);
    printf("\n");

    int b, n;
    b = 6;
    n = ++b;
    printf("%d  %d", b , n);
    return 0;
}