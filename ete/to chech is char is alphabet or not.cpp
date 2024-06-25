#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	
	if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
	{
		printf("character is an alphabet");
	}
	else 
	{
		printf("character is not an alphabet");
	}
}
