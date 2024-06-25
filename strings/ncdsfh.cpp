#include<stdio.h>
 void rectangle(int a, int b)
 {
 	printf("the peri is%d",2*(a+b));
 	printf("the area is%d",a*b);
 }
 int main()
 {
 	int a,b;
 	scanf("%d %d",&a,&b);
 	rectangle(a,b);
 }

