#include <stdio.h>
int cnd(int num) {
    if (num == 0)
        {
        	return 0;
		}
    else
    {
	
    return num%10 + cnd(num / 10);
}
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int digits = cnd(number);
    printf("Number of digits: %d\n", digits);
    
    return 0;
}




