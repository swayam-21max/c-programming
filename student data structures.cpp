#include<stdio.h>
struct student
{
	int roll,name[30],age,marks;
};
int main()
{
	printf("this is the program to rint the name age roll number and the marks of the student:\n");
	struct student s1;
	printf("enter the details of student s1:\n\n");
	printf("enter the name :\n");
	scanf("%s",&s1.name);
	printf("enter the roll number :\n");
	scanf("%d",&s1.roll);
	printf("enter the age :\n");
	scanf("%d",&s1.age);
	printf("enter the marks :\n");
	scanf("%d",&s1.marks);
	printf("the student %s roll number%d of age %d has obtained %d marks",s1.name,s1.roll,s1.age,s1.marks);
}
