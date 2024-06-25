#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];
    int freq[26] = {0}; // Array to store frequency of each character, assuming input only contains lowercase alphabets

    // Input the string
    printf("Enter a string (only lowercase alphabets, no spaces or special characters): ");
    scanf("%s", str);

    // Calculate frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i] - 'a']++;
    }

    // Output frequency of each character
    printf("Frequency of each character:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}

