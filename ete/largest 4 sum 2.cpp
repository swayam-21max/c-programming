#include<stdio.h>

int main() {
    int numbers[4];
    int sum = 0;
    printf("Enter four numbers: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &numbers[i]);
    }
    int greatest = numbers[0];
    for (int i = 1; i < 4; i++) {
        if (numbers[i] > greatest) {
            greatest = numbers[i];
        }
    }

	   int greatest_index = -1;
    for (int i = 0; i < 4; i++) {
        if (numbers[i] == greatest) {
            greatest_index = i;
            break;
        }
    }
    numbers[greatest_index] = 0;
    int second_greatest = numbers[0];
    for (int i = 1; i < 4; i++) {
        if (numbers[i] > second_greatest) {
            second_greatest = numbers[i];
        }
}
    sum = greatest + second_greatest;

    printf("Sum of the two greatest numbers: %d\n", sum);

    return 0;
}

