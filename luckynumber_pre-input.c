#include <stdio.h>

void findLuckyNumbers(int n) {
    int lucky[n];
    int i, j, count;

    // Fill the array with consecutive numbers starting from 1
    for (i = 0; i < n; i++) {
        lucky[i] = i + 1;
    }

    // Elimination process
    for (i = 1; i < n; i++) {
        count = 0; // Counter for numbers to be skipped
        for (j = i; j < n; j++) {
            if (lucky[j] != 0) {
                count++;
                if (count == 2) {
                    lucky[j] = 0; // Mark the number to be eliminated
                    count = 0;   // Reset the counter
                }
            }
        }
    }

    // Print lucky numbers
    printf("Lucky numbers: ");
    for (i = 0; i < n; i++) {
        if (lucky[i] != 0) {
            printf("%d ", lucky[i]);
        }
    }
}

int main() {
    int n;
    printf("Enter the range of numbers: ");
    scanf("%d", &n);
    findLuckyNumbers(n);
    return 0;
}
