#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
		
	}
	printf("the sum of first %d natural numbers is %d",n,sum);
	
}
