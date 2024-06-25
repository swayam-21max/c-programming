#include<stdio.h>
struct time
{
	int hours ;
	int minutes ;
	int seconds;
	
	
};
int main ()
{
printf("WELCOME TO THE PROGRAM OF TIME ADDITION:");
struct time t1,t2,t3;
printf("enter time t1:\n");
scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.seconds);
printf("enter time t2:\n");
scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.seconds);
t3.hours=t1.hours+t2.hours;
printf("the hours=%d\n",t3.hours);
t3.minutes=t1.minutes+t2.minutes;
printf("the minutes=%d\n",t3.minutes);
t3.seconds=t1.seconds+t2.seconds;
printf("the seconds=%d\n",t3.seconds);
if (t1.seconds>=60)
{
	t3.minutes=t3.minutes+60;
	t3.minutes==60;
	
}
printf("%d %d %d",t3.hours,t3.minutes,t3.seconds);
	
}
	

