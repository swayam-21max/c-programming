#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int greatest;
    if (num1 > num2) {
        if (num1 > num3)
            greatest = num1;
        else
            greatest = num3;
    } else {
        if (num2 > num3)
            greatest = num2;
        else
            greatest = num3;
    }
    if (isPalindrome(greatest))
        printf("%d\nPalindrome", greatest);
    else
        printf("%d\nNot Palindrome", greatest);
    return 0;
}

