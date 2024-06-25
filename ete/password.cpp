#include<stdio.h>
#include<math.h>
int main()
{
	int a[5],i,sum=0,pass=0,tsum,dig;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		sum+=a[i+1]-a[i];
	}
	if(sum<0)
	{
		sum=-sum;
	}
	tsum=sum;
	while(tsum>0)
	{
		dig=tsum%10;
		tsum/=10;
		int power=dig*dig*dig;
		pass+=power;
	}
	printf("%d",pass);
}
