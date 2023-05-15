#include <stdio.h>

#define PI 3.14159

void calculateCircle(float radius, float *diameter, float *circumference, float *area) {
    *diameter = 2 * radius;
    *circumference = 2 * PI * radius;
    *area = PI * radius * radius;
}

int main() {
    float radius, diameter, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    calculateCircle(radius, &diameter, &circumference, &area);
    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);
    return 0;
}
