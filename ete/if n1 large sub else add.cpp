#include<stdio.h>
int main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	int o;
	if(n1>n2)
	{
		o=n1-n2;
	}
	else
	{
		o=n1+n2;
	}
	printf("%d",o);
	
}
