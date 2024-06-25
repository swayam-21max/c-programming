#include<stdio.h>
int main()
{
	int year;
	printf("enter any year");
	scanf("%d",&year);
	if(year%4==0 && year%400==0)
	{
		printf(" the year %d is a leap year",year);
	}
	else if (year%400==0 && year%100!=0)
	{
		printf("the year %d is a leap year",year);
	}
	else
	{
		printf("the year%d is not leap",year);
	}
}
