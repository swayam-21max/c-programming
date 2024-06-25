#include<stdio.h>
int main()
{
	int n1,n2;
	float res=0.0f;
	char op;
	scanf("%d %c %d",&n1,&op,&n2);
	switch(op)
	{
		case '+':
			res=n1+n2;
			break;
		case '-':
			res=n1-n2;
			break;
		case '/':
			res=n1/n2;
			break;
		case '%':
			res=n1%n2;
			break;	
		case '*':
			res=n1*n2;
			break;			
		default:
		printf("enter a valid op");
		break;
			
	}
	printf("%f",res);
	
}
