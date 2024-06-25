#include <stdio.h>
int cnd(long int num) {
    if (num == 0)
        {
        	return 0;
		}
    else
    {
	
    return 1 + cnd(num / 10);
}
}

int main() {
   long int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int digits = cnd(number);
    printf("Number of digits: %ld\n", digits);
    
    return 0;
}




