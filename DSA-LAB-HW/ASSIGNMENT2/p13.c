#include <stdio.h>
#include <stdlib.h>

void display(int *a, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reversePart(int *v, int i, int j) {
    while (i <= j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

void rotate(int *v, int n, int k) {
    reversePart(v, 0, n - 1 - k);
    reversePart(v, n - k, n - 1);
    reversePart(v, 0, n - 1);
    return;
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *v = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        int q;
        printf("Enter the element: ");
        scanf("%d", &q);
        v[i] = q;
    }

    int key;
    printf("Enter the key: ");
    scanf("%d", &key);

    if (key > n) key = key % n;

    display(v, n);

    rotate(v, n, key);

    display(v, n);

    free(v);
    return 0;
}

