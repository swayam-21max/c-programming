#include<stdio.h>
int main()
{
	int count=1,work,over;
	float pay;
	while (count<=5)
	{
		scanf("%d",&work);
		if(work>40)
		{
			over=work-40;
			pay+=over*12;
		}
	
			count++;
		
	}
	printf("%.2f",pay);
}
