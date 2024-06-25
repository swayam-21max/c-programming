#include<stdio.h>
int main()
{
	char name[50];
	int roll;
	float marks[3];
	float avg;
	
	// Input name, roll, and marks
	scanf("%s", name);
	scanf("%d", &roll);
	scanf("%f %f %f", &marks[0], &marks[1], &marks[2]);
	
	// Calculate average marks
	avg = (marks[0] + marks[1] + marks[2]) / 3.0;
	
	// Print average marks along with name and roll
	printf("Average marks for student %s with roll number %d is %.2f\n", name, roll, avg);
	
	return 0;
}

