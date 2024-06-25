#include<stdio.h>
int main()
{
	int a[10],avg=0,sum=0,i;
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int lar=a[0],small=a[0];
	for(i=0;i<5;i++)
	{
		avg=a[i]/5;
		avg++;
		 sum=sum+a[i];
		 
		 if(a[i]>lar)
		 {
		 	lar=a[i];
		 }
		 if(a[i]<small)
		 {
		   small=a[i];
		 }
	}
	printf(" avg = %d sum = %d lar=%d small =%d",avg,sum,lar,small);
	
}
