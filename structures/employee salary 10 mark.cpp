#include<stdio.h>
#include<string.h>
struct salary
{
    char name[50];
	int salary;
	int hours;
	
};
void increase(struct salary *s1)
{
	if( s1->hours>=12)
	{
		s1->salary+=150;
	}
	else if (s1->hours>=10)
	{
		s1->salary+=100;
	}
	else if(s1->hours>=8)
	{
		s1->salary+=50;
	}
}
int main()
{
	printf("THIS PROGRAM IS TO CALC THE SALARIES OF THE EMPLOYEES OF A COMPANY WITH THE WORK HOURS PER DAY CONDITIONS\N");
	struct salary s1[10];
	for(int i=0;i<10;i++)
	{
		fgets(s1[i].name,sizeof(s1[i].name),stdin);
		s1[i].name[strcspn(s1[i].name,"\n")]='\0';
		printf("enter the salary of the employee %d",i+1);
		scanf("%d",&s1[i].salary);
		printf("enter the hours of the work of the employee %d",i+1);
		scanf("%d",&s1[i].hours);
		getchar();
	}
	for(int i=0;i<10;i++)
	{
		increase(&s1[i]);
	}
	printf("the employee details are \n");
	for(int i=0;i<10;i++)
	{
		printf("the employee name is %s and there slary is %d",s1[i].name,s1[i].salary);
	}

}
