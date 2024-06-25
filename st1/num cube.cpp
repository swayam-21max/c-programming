#include<stdio.h>
int main()
{
	int number,cube,digit;
	int temp=number;
	printf("enter a number");
	scanf("%d",&number);
	while(temp>0)
	{ digit=number%10;
	temp=digit;
	number=number/10;
	printf("%d",number);
		
	}
	
}
