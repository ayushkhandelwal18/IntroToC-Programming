#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter element %d of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        int min = arr[i];
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
                minIndex = j;
            }
        }

       
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    
    printf("\nSorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d element of the array is: %d\n", i + 1, arr[i]);
    }

    return 0;
}