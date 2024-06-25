#include<stdio.h>
#include<string.h>
struct student 
{
	char name[20];
	int marks;
	int roll_num;
};
int main()
{   char max=s1[0];
	struct student s1[3];
	for (int i=0 ; i<3 ; i++ )
	{
		scanf("%s %d %d",s1[i].name, &s1[i].marks,&s1[i].roll_num);
	}
	for (int i=0 ; i<3 ; i++ )
	{
	
	printf("%s %d %d",s1[i].name, s1[i].marks,s1[i].roll_num);
    }
    for (int i=0 ; i<3 ; i++ )
    {
    	if s1[i]>s1[0]
    	{
    		max==s1[i];
		}
	}
	printf("\n%s",max);
    
}
