#include<stdio.h>
int main()
{
	int helmet,vehicle,license,insurance,i;
	int fine =0;
	printf("enter the Number of Vehicles");
	scanf("%d",&vehicle);
	for(i=1;i<=vehicle;i++)
	{
	printf("enter 1 if have helmet else enter 0 ");
	scanf("%d",&helmet);
	printf("enter 1 if license else 0 ");
	scanf("%d",&license);
	printf("enter 1 if insurance else 0 ");
	scanf("%d",&insurance);
	if (helmet!=1)
	{
		fine+=2000;
	}
	if(license!=1)
	{
		fine+=3000;
		
	}
	if(insurance!=1)
	{
		fine+=5000;
	}
	if(helmet==1&& license==1 && insurance==1)
	{
		fine+=0;
	
	}
	printf("%d",fine);
	
}
}
