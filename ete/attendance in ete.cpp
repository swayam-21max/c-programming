#include<stdio.h>
int main()
{
	int classes_attended,classes_held;
	char medical;
	printf("enter the number of classes attended and the classes held");
	scanf("%d %d",&classes_attended,&classes_held);
	float percentage=(classes_attended/classes_held)*100;
	if(percentage>=75)
	{
		printf("allowed");
	}
	else
	{
		scanf(" %c",&medical);
		if(medical=='Y' || medical=='y')
		{
			printf("allowed");
			
		}
		else
		{
			printf("not allowed");
		}
	}
	
}
