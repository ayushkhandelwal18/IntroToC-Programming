#include <stdio.h>

void findTriplet(int arr[], int n, int X) {
    int found = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == X) {
                    printf("Output: [%d, %d, %d]\n", arr[i], arr[j], arr[k]);
                    found = 1;
                    return;
                }
            }
        }
    }
    if (!found) {
        printf("Output: No Triplet Available\n");
    }
}

int main() {
    int N, X;

    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int arr[N];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the integer X: ");
    scanf("%d", &X);

    findTriplet(arr, N, X);

    return 0;
}
