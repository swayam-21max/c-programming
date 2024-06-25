#include<stdio.h>
int main()
{
int a,b;
printf("enter aX , bY");
scanf ("%d %d",&a,&b);
if(a>0 && b>0)
{
	printf("%d,%d is in first quadrant",a,b);
	
}
else if(a<0 &&b>0)
{
	printf("%d,%d is in second quadrant",a,b);
}
else if(a<0 && b<0)
{
	printf("%d,%d is in third quadrant",a,b);
}
else if(a>0 && b<0)
{
	printf("%d,%d is in fourth quadrant",a,b);
}
}
