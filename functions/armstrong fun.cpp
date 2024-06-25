#include<stdio.h>
int armstrong(int num)
{   int num;
	int n=num,sum=0,digit=0;
	while(num!=0)
	{
		num=num/10;
		digit++;
	}
	 num=n;
	 while(num!=0)
	 {
	 	int d=num%10;
	 	sum=sum+pow(d,digit);
	 	num=num/10;
	 }
	 return 1;
	
}
int main()
{
	int num,result;
	printf("enter a number");
	scanf("%d",&num);
    result=armstrong(num);
    if(result == 1)
    {
    	printf("ARMSTRONG");
	}
	else
	{
		printf("NOT ARMSTRONG");
	}
    
}
