#include<stdio.h>
int main()
{
	int n1,n2;
	int sum=0;
	scanf("%d %d",&n1,&n2);
	for(int i=n1+1;i<n2;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
}
