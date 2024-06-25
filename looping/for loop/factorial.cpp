#include<stdio.h>
int main()
{
	int i,fact=1,num;
	printf("enter num");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("the factorial of %d if %d",num,fact);
	
}
