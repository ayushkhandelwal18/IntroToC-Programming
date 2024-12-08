#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int minDifference(int arr[], int n, int m) {
    if (m > n) {
        return -1; 
    }

  
    qsort(arr, n, sizeof(int), compare);

   
    int minDiff = arr[m - 1] - arr[0];
    for (int i = 1; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    return minDiff;
}

int main() {
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 5; 
    int minDiff = minDifference(arr, n, m);

    printf("Output: %d\n", minDiff);

    return 0;
}
