
#include <stdio.h>  
int prime(int number) 
{ 
	int i; 
	for (i = 2; i <= number - 1; i++) 
	{ 
		if (number % i == 0) 
			return 0; 
	} 
	return 1; 
} 

int main() 
{ 
	int num, result;
	printf("enter a number to check");
	scanf("%d",&num); 
	result = prime(num); 

	if (result == 1) 
		printf("%d is a prime number", num); 
	else
		printf("%d is not a prime number", num); 

	return 0; 
}

