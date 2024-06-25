#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks[3];
};

int main() {
    struct Student student;
    scanf("%s", student.name);
    scanf("%d", &student.rollNumber);
    scanf("%f %f %f", &student.marks[0], &student.marks[1], &student.marks[2]);
    float sum = 0.0;
    for (int i = 0; i < 3; i++) {
        sum += student.marks[i];
    }
    float average = sum / 3.0;
    printf("\nStudent Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Average Marks: %.2f\n", average);
    return 0;
}
// is code me pehle hum student ka structure declare krege jisme name as char , roll as int aur avg as float rhega .
//then int main me student declare krege 
//scand krvayege sara kuch as student.xyz.
//float sum ko zero rkhte huye 
//for loop chlgi 0 se 3 tak;
//usme sum+=student.marks[i]
//float avg krke sum/r
//fir sab print krvaadenve

