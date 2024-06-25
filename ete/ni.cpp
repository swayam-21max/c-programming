#include<stdio.h>
int main()
{
	char name[1000],i=0,k=0;
	scanf("%[^\n]",name);
	while(name[i]!='\0')
	{
		if(name[i]==' ')
		{
			printf("%c. ",name[k]);
			k=i+1;
		}
		i=i+1;
	}
	while(name[k]!='\0')
	{
		printf("%c",name[k]);
		k++;
	}
}
