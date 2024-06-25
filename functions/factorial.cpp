#include<stdio.h>

int fact(int num)
{
	int i;
	int factorial =1;
	for (i=1;i<=num;i++)
	{
		factorial=factorial*i;
		
	}
	return(factorial);
}
int main()
{
	int num;
	int factorial;
	printf("enter any element");
	scanf("%d",&num);
	factorial=fact(num);
	printf("the factorial of the number %d is %d\n",num ,factorial);
}
