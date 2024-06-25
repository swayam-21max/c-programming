#include<stdio.h>
int main()
{
	int n,i=0,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",i);
}
