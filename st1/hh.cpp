#include <stdio.h>
float calculateArea(float radius) {
    return 3.14 * radius * radius;
}
float calculateCircumference(float radius) {
    return 2 * 3.14 * radius;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = calculateArea(radius);
    float circumference = calculateCircumference(radius);

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}

