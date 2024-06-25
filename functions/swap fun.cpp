#include<stdio.h>
void swap(int x ,int y)
{
	int n;
	n=x;
	x=y;
	y=n;
	printf("after swap: %d %d\n",x,y);
}
int main()
{
	int a,b;
	printf(" n1:");
	scanf("%d",&a);
    printf(" n2:");
	scanf("%d",&b);
	printf("before swap %d %d \n",a,b);
	swap(a,b);
	printf("real no: %d %d \n",a,b);	
}
