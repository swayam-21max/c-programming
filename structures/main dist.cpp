#include<stdio.h>
struct distance 
{
	int inches ;
	int feet ;
	
};
int main()
{
	printf("THIS IS THE PROGRAM TO FIND THE DISTANCES BETWEEN 2 HEIGHTS \n");
	struct distance d1,d2,d3;
	printf("enter the distances d1\n");
	scanf("\n%d \n%d",&d1.inches,&d1.feet);
	
	printf("enter the distances d2");
	scanf("%d %d",&d2.inches,&d2.feet);
	d3.inches=d1.inches+d2.inches;
	printf("d3 inches =%d\n",d3.inches);
	d3.feet=d1.feet+d2.feet;
	printf("d3 feet =%d\n",d3.feet);
	if(d3.inches>=12)
	{
		d3.feet=d3.feet+1;
		d3.inches-=12;
	}
	printf("the height is %d feet and %d inches",d3.feet,d3.inches);
	
	
}
