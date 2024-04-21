#include <stdio.h>

int main() {
    int num, limit = 100; // Define your limit here
    printf("Composite numbers up to %d are:\n", limit);
    
    // Loop through numbers from 4 to the limit
    for (num = 4; num <= limit; ++num) {
        int is_composite = 0; // Assume the number is not composite
        int i; // Declare loop variable outside of the loop
        
        // Check divisibility by numbers from 2 to num/2
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                // If divisible, the number is composite
                is_composite = 1;
                break;
            }
        }
        
        // If is_composite is 1, then the number is composite
        if (is_composite) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}
