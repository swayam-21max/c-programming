#include <stdio.h>
#include <string.h>

// Define a structure to store employee information
struct Employee {
    char name[50];
    float salary;
    int hoursWorked;
};

// Function to increase salary based on hours worked
void increaseSalary(struct Employee *emp) {
    if (emp->hoursWorked >= 12) {
        emp->salary += 150;
    } else if (emp->hoursWorked >= 10) {
        emp->salary += 100;
    } else if (emp->hoursWorked >= 8) {
        emp->salary += 50;
    }
}

int main() {
    // Declare an array of 10 employees
    struct Employee employees[10];

    // Input employee details
    for (int i = 0; i < 10; i++) {
        printf("Enter name of employee %d: ", i + 1);
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; // Remove newline character
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);
        printf("Enter hours of work per day of employee %d: ", i + 1);
        scanf("%d", &employees[i].hoursWorked);
        getchar(); // Consume newline character
    }

    // Increase salary based on hours worked
    for (int i = 0; i < 10; i++) {
        increaseSalary(&employees[i]);
    }

    // Print employee names and final salaries
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 10; i++) {
        printf("Name: %s, Salary: $%.2f\n", employees[i].name, employees[i].salary);
    }

    return 0;
}

