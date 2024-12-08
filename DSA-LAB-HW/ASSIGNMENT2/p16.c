#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int inputArray[N], factorialArray[N];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &inputArray[i]);
    }
    for (int i = 0; i < N; i++) {
        factorialArray[i] = factorial(inputArray[i]);
    }
    printf("Output: [");
    for (int i = 0; i < N; i++) {
        printf("%d", factorialArray[i]);
        if (i < N - 1) {
            printf(",");
        }
    }
    printf("]\n");
    return 0;
}
