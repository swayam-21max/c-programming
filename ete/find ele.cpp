#include <stdio.h>

int main(){
	int a[10];
	int i;
	int count=0;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	int search;
	printf("src");
	scanf("%d",&search);
	for(i=0;i<10;i++)
	{
		if(a[i]==search)
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("element %d found %d times",search,count);
	}
	else
	{
		printf("element not found");
	}
	
}
