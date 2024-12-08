#include <stdio.h>


int isSubset(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] == arr2[j]) {
            i++;
            j++;
        } else {
            return 0;
        }
    }
    return (j == m);
}

int main() {
    int n, m;

    printf("Enter the size of array A: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter elements of array A: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of array B: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter elements of array B: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    if (isSubset(arr1, arr2, n, m)) {
        printf("Output: 'B is a subset of A'\n");
    } else {
        printf("Output: 'B is not a subset of A'\n");
    }

    return 0;
}
