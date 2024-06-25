#include<stdio.h>
int main()
{
	int i;
	char ch[100];//=//"HellO";
	scanf("%c",&ch[i]);
	int size=sizeof(ch)/sizeof(char);
	for(i=0;i<size;i++)
	{
		if(ch[i]>=65 && ch[i]<=90)
		{
			ch[i]=ch[i]+32;
		}
		else if(ch[i]>=97 && ch[i]<=122)
		{
			ch[i]=ch[i]-32;
		}
	}
     	printf("%s",ch);
	}
