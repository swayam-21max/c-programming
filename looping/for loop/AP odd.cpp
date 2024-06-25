#include<stdio.h>
int main()
{
	
	int n;
	printf("enter n:");
	scanf("%d",&n);
	for (int i=1;i<=2*n-1;i+=2)
	{
		printf("%d ",i);
	}
}
