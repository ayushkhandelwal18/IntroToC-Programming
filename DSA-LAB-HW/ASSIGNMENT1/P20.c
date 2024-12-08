#include <stdio.h>
#include <stdbool.h>

int count(char *str) {
    int count = 0;
    bool Word = false;

    while (*str) {
        if (*str == ' ' || *str == '\n' || *str == '\t') {
            Word = false;
        } else if (!Word) {
            Word = true;
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int words = count(str);
    printf("Number of words : %d\n", words);

    return 0;
}


