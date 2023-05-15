#include <stdio.h>

int main() {
    float centimeters, meters, kilometers;

    printf("Enter length in centimeters: ");
    scanf("%f", &centimeters);

    meters = centimeters / 100;
    kilometers = centimeters / 100000;

    printf("Length in meters: %.2f\n", meters);
    printf("Length in kilometers: %.2f\n", kilometers);

    return 0;
}
