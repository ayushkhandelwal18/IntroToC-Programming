#include<stdio.h>

void insert(int arr[], int size, int index, int element) {
    // Shift elements to the right to make space for the new element
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    // Insert the element at the specified index
    arr[index] = element;
}

int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int index;
    printf("Enter the index: ");
    scanf("%d", &index);

    int element;
    printf("Enter the element: ");
    scanf("%d", &element);

    insert(arr, n, index, element);

    printf("Array after insertion:\n");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

