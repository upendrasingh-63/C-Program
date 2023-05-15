#include <stdio.h>
#include <math.h>

int main() {
    float number, squareRoot;

    printf("Enter a number: ");
    scanf("%f", &number);

    squareRoot = sqrt(number);

    printf("Square root: %.2f\n", squareRoot);

    return 0;
}
