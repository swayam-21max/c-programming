#include<stdio.h>
int main()
{
int year,start_year=2001,remaining_year,leap_year,gap_years,total_days,days;
printf("enter an year");
scanf("%d",&year);
remaining_year=year-start_year;
//printf("y=%d",remaining_year);
leap_year=remaining_year/4;
//printf("\nx=%d",leap_year);
gap_years=remaining_year-leap_year;
//printf("\nr=%d",gap_years);
total_days=(gap_years*365)+(leap_year*366)+1;
printf("td=%d",total_days);
days=total_days%7;
//printf("\nd=%d",days);
 if(days==0)
 {
 	printf("Sunday");
 }
else if(days==1)
 {
 	printf("monday");
 }
else if(days==2)
 {
 	printf("tuesday");
 }
 else if(days==3)
 {
 	printf("wednesday");
 }
 else if(days==4)
 {
 	printf("thursday");
 }
 else if(days==5)
 {
 	printf("friday");
 }
 else if(days==6)
 {
 	printf("saturday");
 }
 else
 {
 	printf("check");
 }
  

}
