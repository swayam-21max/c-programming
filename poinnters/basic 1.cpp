#include<stdio.h>
int main()
{
int i;
printf("enter i");
scanf("%d",&i);
printf("address of i=%u\n",&i);
printf("value of i=%d\n",i);
printf("value of i =%d\n",*(&i));

}
