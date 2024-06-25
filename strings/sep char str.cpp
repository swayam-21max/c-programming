#include<stdio.h>
int main()
{
	char str[100];
	int i=0;
	printf("this is a program to separate the variables /characters of a string");
	printf("\n input the string");
	fgets(str,sizeof str,stdin);
	printf("the characters of the string are");
	while (str[i]!='\0')
	{
		printf("%c ",str[i]);
		i++;
	}
	printf("\n");
}
