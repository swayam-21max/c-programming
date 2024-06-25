#include<stdio.h>
int main()
{
	int a,b,c,sum=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		sum+=a;
		if(b>c)
		{
			sum+=b;
		}
		else
		{
			sum=sum+c;
		}
	
	}
	else if(b>c && b>c)
	{
		sum=sum+=b;
		if(a>c)
		{
			sum+=a;
		}
		else 
		{
			sum+=c;
		}
		
	}
	else 
	{
		sum+=c;
		if(a>b)
		{
			sum+=a;
		}
		else
		{
			sum+=b;
		}
	}
	printf("%d",sum);
}
