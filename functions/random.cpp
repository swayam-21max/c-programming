#include<stdio.h>
int fun(int n)
{
	if(n<=10)
	{
		return n*n;
	}
	else
	{
		return n*n*n;
	}
	printf("%d",n);
	
}
int main()
{
	int n;
	printf("enter the value of n");
	scanf("\n%d",&n);
	int k=fun(n);
	printf("%d",k);
}

