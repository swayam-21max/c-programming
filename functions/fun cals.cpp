#include<stdio.h>
void sum()
{
	float a,b;
	printf("enter a and b");
	scanf("%f%f",&a,&b);
	printf("sum is:%f",a+b);
}
void div()
{
	float a,b;
	printf("enter a and b");
	scanf("%f%f",&a,&b);
	printf("div is:%f",a/b);
}
void mul()
{
	float a,b;
	printf("enter a and b");
	scanf("%f%f",&a,&b);
	printf("mul is:%f",a*b);
}
void sub()
{
	float a,b;
	printf("enter a and b");
	scanf("%f%f",&a,&b);
	printf("sub is:%f",a-b);
}
void rem()
{
	int a,b;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	printf("rem is:%d",a%b);
}
int main()
{
	char opt,ch;
	do{
	
	printf("enter operaator");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
			sum();
			break;
		case '/':
			div();
			break;
		case '*':
			mul();
			break;
	    case '-':
			sub();
			break;
	    case '%':
			rem();
			break;
		default:
		printf("enter valid input")	;
		printf("enter y or Y");
		scanf("%c",&opt);
		
		
	
	}
}while(opt==('y' || 'Y')); 
}
