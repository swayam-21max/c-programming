#include<stdio.h>
int main()
{
	int a;
	printf("enter number to check odd eve");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("the integer %d is even ",a);
	}
	else
	{
		printf("the integer %d is odd",a);
	}
}
