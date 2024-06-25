#include<stdio.h>
int main()
{
	int i=0,n,sum=0;
	printf("enter n:\n");
	scanf("%d",&n);
	while(i<=n)
	{    
	    sum=sum+i;
		i=i+1;
	}printf("the sum of first %d natural numbers is %d",n,sum);
}
