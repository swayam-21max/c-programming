#include<stdio.h>
int main()
{
	int height;
	printf("enter height in cms");
	scanf("%d",&height);
	if(height<150)
	{
		printf("the person is dwarf");
	}
	else if(height==150)
	{
		printf("your height is average");
	}
	else 
	{
		printf("the person is tall");
	}
}
