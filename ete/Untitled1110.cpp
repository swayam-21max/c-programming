#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; 
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vowels++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            consonants++;
    }
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
