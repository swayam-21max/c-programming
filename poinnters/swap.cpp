#include<stdio.h>
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("the value of x after swapping is %d",x);
	printf("the value of y after swapping is %d",y);
}
int main()
{
int a,b;
printf("evoidnter the values of a \n andb");
scanf("%d%d2",&a,&b);
 swap(a,b);

}
