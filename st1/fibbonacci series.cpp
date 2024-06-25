#include <stdio.h>

int main() {
    int num, first_num = 0, second_num = 1, next_num, i;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
     printf("Fibonacci Series:\n");
    for (i = 0; i < num; i++)
	{
        printf("%d ", first_num);
        next_num = first_num + second_num;
        first_num = second_num;
        second_num = next_num;
    }
	return 0;
}

