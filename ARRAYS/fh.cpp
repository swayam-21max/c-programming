#include <stdio.h>
#include<string.h>
int main()


{
	int a[10]={1,34,23,24,35,12,26,65,66,45};
	int t,i,j;
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
		if (a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}	
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}
