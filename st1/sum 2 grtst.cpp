#include<stdio.h>
int main()
{
	int number;
	printf("enter a three digit number");
	scanf("%d",&number);
	 int a=number%10;
	 int b=number/10;
	 int c= a%10;
	 int d=a/10;
	
	if(b>d && c>d)
	{
		printf("sum of 2 greatest digits is:%d",a+c);
    }
	 else if(d>a && c>a)
	 {
	 	printf("sum of 2 greatest digits is:%d",c+d);
	 	
	 }
	 else
	 {
	 	printf("the sum of 2 greatest digits is :%d",b+d);
	 }
	 
	  
	
	 
}
