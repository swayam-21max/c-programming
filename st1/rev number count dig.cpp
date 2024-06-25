#include <stdio.h>

int main() {
    int num, count = 0, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    temp = num;
    while (temp != 0)
	 {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    printf("Reverse of the number: %d\n", rev);
    return 0;
}

