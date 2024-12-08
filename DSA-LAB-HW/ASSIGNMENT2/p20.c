#include <stdio.h>

void findCommonElements(int A[], int n1, int B[], int n2, int C[], int n3) {
    int i = 0, j = 0, k = 0;

    printf("Output: ");
    while (i < n1 && j < n2 && k < n3) {
        if (A[i] == B[j] && B[j] == C[k]) {
            printf("%d ", A[i]);
            i++;
            j++;
            k++;
        } else if (A[i] < B[j]) {
            i++;
        } else if (B[j] < C[k]) {
            j++;
        } else {
            k++;
        }
    }
    printf("\n");
}

int main() {
    int n1 = 6, A[] = {1, 5, 10, 20, 40, 80};
    int n2 = 5, B[] = {6, 7, 20, 80, 100};
    int n3 = 8, C[] = {3, 4, 15, 20, 30, 70, 80, 120};

    findCommonElements(A, n1, B, n2, C, n3);

    return 0;
}
