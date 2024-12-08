#include <stdio.h>

void findUnion(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    // Print remaining elements of arr1, if any
    while (i < m) {
        printf("%d ", arr1[i]);
        i++;
    }
    // Print remaining elements of arr2, if any
    while (j < n) {
        printf("%d ", arr2[j]);
        j++;
    }
}

void findIntersection(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
}

int main() {
    int arr1[100], arr2[100];
    int m, n;

    printf("Enter the size of array 1: ");
    scanf("%d", &m);
    printf("Enter elements of array 1 in sorted order: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of array 2: ");
    scanf("%d", &n);
    printf("Enter elements of array 2 in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Union of the arrays: ");
    findUnion(arr1, arr2, m, n);
    printf("\nIntersection of the arrays: ");
    findIntersection(arr1, arr2, m, n);

    return 0;
}
