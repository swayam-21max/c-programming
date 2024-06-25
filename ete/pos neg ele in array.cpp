#include<stdio.h>
int main()
{
	int i,a[0],p=0,n=0;
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			n++;
		}
		else
		{
			p++;
		}
	}
	printf("%d\n%d",p,n);
}

