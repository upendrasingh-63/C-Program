#include <stdio.h>

int main() {
    float length, breadth, perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    perimeter = 2 * (length + breadth);

    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
