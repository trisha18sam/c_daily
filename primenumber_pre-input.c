#include <stdio.h>

int main() {
    int num, limit = 100; // Define your limit here
    printf("Prime numbers up to %d are:\n", limit);
    
    // Loop through numbers from 2 to the limit
    for (num = 2; num <= limit; ++num) {
        // Assume the number is prime
        int is_prime = 1;
        int i; // Declare loop variable outside of the loop
        
        // Check divisibility by numbers from 2 to num/2
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                // If divisible, the number is not prime
                is_prime = 0;
                break;
            }
        }
        
        // If is_prime is still 1, then the number is prime
        if (is_prime) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}
