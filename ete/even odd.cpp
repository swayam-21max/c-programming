#include <stdio.h>

int main() {
    // Define variables
    int num, digit, position = 1;
    int sum_even = 0, sum_odd = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process each digit of the number
    while (num > 0) {
        // Extract the last digit
        digit = num % 10;
        
        // Add the digit to the sum based on its position
        if (position % 2 == 0) {
            sum_even += digit; // Add to sum of digits at even places
        } else {
            sum_odd += digit; // Add to sum of digits at odd places
        }
        
        // Move to the next digit
        num /= 10;
        position++;
    }

    // Display the sums
    printf("Sum of digits at even places: %d\n", sum_even);
    printf("Sum of digits at odd places: %d\n", sum_odd);

    return 0;
}

