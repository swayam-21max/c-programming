#include <stdio.h>
int main()
{ float attendance,attended;
printf("enter number of lectures done:");
scanf("%f",&attendance);
printf("enter number of lectures attended:");
scanf("%f",&attended);
float percentage =(attended/attendance)*100;
printf("the percentage of attandance is:%f\n",percentage);
 if(percentage>=75)
 {
 	printf("the user is allowed\n");
 }
 else
 {  
 
 
 	printf("do you have medical Y:\n");
 	char option;
 	
 	scanf(" %c",&option);
 	if((option=='Y' || 'y' )&&percentage>=65)
 	{   
 	//scanf("%c",&option);
 		printf("the student is allowed");
	 }
	 else
	 {
	 	printf("not allowed");
	 }

 	
 }
}
    
