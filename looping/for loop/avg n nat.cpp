#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("enter n numbers\n");
	
	for(i=1;i<=10;i++)
	{
	printf("number:%d=",i);
	scanf("%d",&n);
		sum+=n;
		
	}
	float avg=sum/10;
	printf("the sum of first %d natural numbers is %d and there average is %f",n,sum,avg);
	
}
