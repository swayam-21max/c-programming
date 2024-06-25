#include<stdio.h>
float circlearea(float radius)
{
	return 3.14*radius*radius;

}
int main()
{
	float radius;
	printf("enter the radius of the circle");
	scanf("%f",&radius);
	printf("the area of circle is :%.2f\n",circlearea(radius));
}
