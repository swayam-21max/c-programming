#include<stdio.h>
int main()
{
	char str[50];
	printf("enter a string ");
	fgets(str,sizeof str , stdin);//read a string (kinda scanf)
	printf("the string u entered is :%s",str);
	
}
