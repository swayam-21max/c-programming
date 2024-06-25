//#include <stdio.h>
//
//int main() 
//1. odd eve
//{
//    int num;
//    printf("Enter an integer: ");
//    scanf("%d", &num);
//    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
//
//    return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	int i,v=0,c=0;
	fgets(str,sizeof(str),stdin);
	str[strlen(str)-1]='\0';
	for(i=0;str[i]!='\0';i++)
	{
 
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			v++;
		}
		else if(('A'<=str[i] && str[i]<='Z')|| ('a'<=str[i] && str[i]<='z'))
		{
			c++;
		}
	}
	printf("v=%d",v);
	printf("c=%d",c);
}



