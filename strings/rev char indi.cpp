#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0;
	printf("THIS IS A PROGRAM TO PRINT THE INDIVIDUAL CHARACTERS IN REVERSE ORDER OF A STRING");
	printf("INPUT THE STRING");
	fgets(str , sizeof str,stdin);
	i=strlen(str);
	printf("the characters in reverse order are");
	for(i=i-1;i>=0;i--)
	{
		printf("%c ",str[i]);
	}
	printf("\n");
}
