#include<stdio.h>
int main()
{
	char str[100];
	int i=0;
	printf("\n this is a program to find the length of a string");
	printf("\n enter the string ");
	fgets(str , sizeof str,stdin);
	while(str[i]!=0)
	{
		i++;
	}
	printf("the length of the string is :%d",i-1);
}
