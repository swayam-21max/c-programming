#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char str[100];
   int c,ch,i;
   printf("this proggram is for replacing lower and upper case letters :");
   printf("\n input the string");
   fgets(str,sizeof str,stdin);
   i=strlen(str);
   c=i;
   printf("the given sentence is : %s",str);
   printf("affter case change");
   for(i=0;i<c;i++)
   {
   	ch=islower(str[i])? toupper(str[i]):tolower(str[i]);
   	putchar(ch);
	   }	
	   printf("\n");
}
