#include <stdio.h>
#include <string.h>
 
struct Student {
    int roll_no;
    char name[100];
    float marks;
};
 
int main()
{
    int i = 0;
    char n[100];
    struct Student student[50];
 
    for (i = 0; i < 50; i++) {
        printf("\nEnter details for Student %d", i + 1);
 
        printf("\nRoll Number: ");
        scanf("%d", &student[i].roll_no);
 
        printf("\nName: ");
        scanf("%s", student[i].name);
 
        printf("\nMarks: ");
        scanf("%f", &student[i].marks);
    }
 
    printf("\nEnter the name of the student whose details you need: ");
    scanf("%s", n);
 
    for (i = 0; i < 50; i++) {
        if (strcmp(n, student[i].name) == 0) {
 
            printf("\nRoll Number: %d", student[i].roll_no);
 
            printf("\nName: %s", student[i].name);
 
            printf("\nMarks: %f", student[i].marks);
 
            break;
        }
    }
 
    if (i == 50)
        printf("No student found with this name");
}
