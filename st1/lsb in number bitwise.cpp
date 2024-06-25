#include<stdio.h>
int main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	 if (n & 1)
	     printf("lsb of %d is set (1)",n);
	 else
	    printf("lsb of %d is unset(1)",n) ;   
}
