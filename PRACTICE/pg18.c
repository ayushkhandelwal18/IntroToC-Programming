#include <stdio.h>
#include <stdlib.h>

// Function to check if the year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int startDay, startMonth, startYear;
    int endDay, endMonth, endYear;

    // Prompt user for input
    printf("Enter the start date (dd mm yyyy): ");
    scanf("%d %d %d", &startDay, &startMonth, &startYear);

    printf("Enter the end date (dd mm yyyy): ");
    scanf("%d %d %d", &endDay, &endMonth, &endYear);

    // Days in each month (assuming non-leap year for simplicity)
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Validate input dates
    if (startDay < 1 || startDay > 31 || startMonth < 1 || startMonth > 12 || startYear < 1 || startYear > 9999 ||
        endDay < 1 || endDay > 31 || endMonth < 1 || endMonth > 12 || endYear < 1 || endYear > 9999) {
        printf("Invalid input dates.\n");
        return 1;
    }

    // Calculate days passed in the start year
    int daysPassedStart = 0;
    for (int i = 0; i < startMonth - 1; i++) {
        daysPassedStart += daysInMonth[i];
    }
    daysPassedStart += startDay;

    // Account for leap year if applicable
    if (isLeapYear(startYear) && startMonth > 2) {
        daysPassedStart++;
    }

    // Calculate days passed in the end year
    int daysPassedEnd = 0;
    for (int i = 0; i < endMonth - 1; i++) {
        daysPassedEnd += daysInMonth[i];
    }
    daysPassedEnd += endDay;

    // Account for leap year if applicable
    if (isLeapYear(endYear) && endMonth > 2) {
        daysPassedEnd++;
    }

    // Calculate days, weeks, and remaining days between the dates
    int totalDays = daysPassedEnd - daysPassedStart;
    int weeks = totalDays / 7;
    int remainingDays = totalDays % 7;

    printf("Total days passed: %d\n", totalDays);
    printf("Weeks passed: %d\n", weeks);
    printf("Remaining days: %d\n", remainingDays);

    return 0;
}