#include <stdio.h>

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

void kOrderDerivative(int A[], int n, int k) {
    if (k < 0) {
        printf("Invalid k\n");
        return;
    }

    if (k == 0) {
        printf("Output: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", A[i]);
        }
        printf("\n");
        return;
    }

    printf("Output: ");
    for (int i = 0; i < n - k; i++) {
        int coeff = A[i + k];
        int fact = factorial(k);
        printf("%d ", coeff * fact);
    }
    printf("\n");
}

int main() {
    int n, k;

    printf("Enter the degree : ");
    scanf("%d", &n);
    n++; 

    int A[n];
    printf("Enter the coefficients : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    kOrderDerivative(A, n, k);

    return 0;
}