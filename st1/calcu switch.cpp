#include<stdio.h>
int main()
{
	int a,b;
	char choice , op;
	do
	{
		scanf("%d%d",&a,&b);
		scanf("%c",&op);
		switch(op)
		{
			case'+':
				printf("%d",a+b);
				break;
			case'-':
				printf("%d",a-b);
				break;
			case'/':
				printf("%d",a/b);
				break;
			case'*':
				printf("%d",a*b);
				break;			
		}
		printf("do yu want to continue");
		scanf("%c",&choice);
	}
	while(choice=='y' || choice=='Y')
}
