#include<stdio.h>

void deleteElement(int arr[], int size, int index) {
    // Shift elements to the left to overwrite the element at the specified index
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
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
    printf("Enter the index of the element to delete: ");
    scanf("%d", &index);

    // Check if the index is valid
    if (index < 0 || index >= n) {
        printf("Invalid index!\n");
        return 1; // Exit with an error code
    }

    deleteElement(arr, n, index);

    printf("Array after deletion:\n");
    for (int i = 0; i < n-1 ; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
