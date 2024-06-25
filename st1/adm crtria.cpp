#include<stdio.h>
int main()
{
	int maths,physics,chemistry,total_1,total_2;
	printf("enter marks in three subjects out of 100");
	scanf("%d%d%d",&maths,&physics,&chemistry);
	total_1=maths+physics+chemistry;
	total_2=maths+physics;
	if(total_1>=190 || total_2>=140 )
	{
		printf("the total marks in PCM is %d and the total marks in PM is %d candidate is eligible for admission",total_1,total_2);
	}
	else
	{
		printf("the total marks is %d in PCM and %d in PM and the candidate is not eligible for asmission",total_1,total_2);
	}
	
}
