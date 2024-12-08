#include <stdio.h>

int maxProfit(int prices[], int n) {
    if (n <= 1) {
        return 0; 
    }
    
    int minPrice = prices[0]; 
    int maxProfit = 0; 
    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i]; 
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice; 
        }
    }
    
    return maxProfit;
}

int main() {
    int n;
    printf("Enter the number of days: ");
    scanf("%d", &n);
    
    int prices[n];
    printf("Enter the prices of stocks for each day: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    printf("Output: %d\n", maxProfit(prices, n));

    return 0;
}
