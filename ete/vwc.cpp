#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	int v=0,i=0;
	int ch=0;
	int dig=0;
	int spc=0;
	scanf("%s",str);
	while(str[i]!='\0')
	{
	   if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			v++;
		}
	  else	if(('A'<=str[i] && str[i]<='Z') ||('a'<=str[i] && str[i]<='z'))
		{
			ch++;
		}
		else if ('0'<=str[i] && str[i]<='9')
		{
			dig++;
		}
		else
		{
			spc++;
		}
		i++;
	}
	printf("v=%d",v);
	printf("ch=%d",ch);
	printf("dig=%d",dig);
	printf("spc=%d",spc);
}
