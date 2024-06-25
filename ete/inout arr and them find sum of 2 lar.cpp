#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    int second_largest = a[1];
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            second_largest = largest;
            largest = a[i];
        } else if (a[i] > second_largest && a[i] != largest) {
            second_largest = a[i];
        }
    }

    int sum = largest + second_largest;
    printf("Sum of largest and second largest elements: %d\n", sum);

    return 0;
}

